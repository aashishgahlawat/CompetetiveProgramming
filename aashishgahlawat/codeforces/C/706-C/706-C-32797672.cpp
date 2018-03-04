#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
#define foriter(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
using namespace std;
int mod=1000000007;
long long int answer;

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}
std::vector<int> energy;
std::vector<string> straightOrder;
std::vector<string> reverseOrder;
int sCount;
long long int dp[100001][2];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>sCount;
    int tempInt;
    for(int i=0;i<sCount;i++){
        cin>>tempInt;
        energy.pb(tempInt);
    }
    string tempString;
    for(int i=0;i<sCount;i++){
        cin>>tempString;
        straightOrder.pb(tempString);
        reverse(tempString.begin(),tempString.end());
        reverseOrder.pb(tempString);
        dp[i][0]=1e18+7;
        dp[i][1]=1e18+7;
    }
    dp[0][0]=0;
    dp[0][1]=energy[0];

    for(int i=1;i<sCount;i++){
        if(straightOrder[i]>=straightOrder[i-1]){
            dp[i][0]=min(dp[i][0],dp[i-1][0]);
        }
        if(straightOrder[i]>=reverseOrder[i-1]){
            dp[i][0]=min(dp[i][0],dp[i-1][1]);
        }
        if(reverseOrder[i]>=straightOrder[i-1]){
            dp[i][1]=min(dp[i][1],dp[i-1][0]+energy[i]);
        }
        if(reverseOrder[i]>=reverseOrder[i-1]){
            dp[i][1]=min(dp[i][1],dp[i-1][1]+energy[i]);
        }
    }
    
    if(min(dp[sCount-1][0],dp[sCount-1][1])==1e18+7) cout<<-1;
    else cout<<min(dp[sCount-1][0],dp[sCount-1][1]);
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}