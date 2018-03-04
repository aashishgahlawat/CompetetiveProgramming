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

int flowers[101];
int dp[1001];
int multiplier[101];
std::vector<pair<int ,int >> subFlowers(101);
void storeSum(int startIndex,int endIndex,int storeAt);
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    int fCount,subCount;
    cin>>fCount>>subCount;
    for(int i=1;i<=fCount;i++){
        cin>>flowers[i];
    }
    int startIndex,endIndex;
    for(int i=1;i<=subCount;i++){
        cin>>startIndex>>endIndex;
        subFlowers[i]={startIndex,endIndex};
        //cout<<subFlowers[i].first<<" "<<subFlowers[i].second<<endl;
        storeSum(startIndex,endIndex,i);
    }
    for(int i=1;i<=subCount;i++){
        if(dp[i]>0){
            for(int x=subFlowers[i].first;x<=subFlowers[i].second;x++){
                multiplier[x]++;
            }
        }
    }
    for(int i=1;i<=fCount;i++){
        answer+=flowers[i]*multiplier[i];
    }
    cout<<answer;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}

void storeSum(int startIndex,int endIndex,int storeAt){
    for(;startIndex<=endIndex;startIndex++){
        dp[storeAt]+=flowers[startIndex];
    }
}