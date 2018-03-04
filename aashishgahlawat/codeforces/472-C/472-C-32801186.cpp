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
int pCount;
std::vector<pair<string,string>> Names;
int permulte[100000];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>pCount;
    string firstTemp,secondTemp;
    for(int i=0;i<pCount;i++){
        cin>>firstTemp>>secondTemp;
        Names.pb(mp(firstTemp,secondTemp));
    }
    for(int i=0;i<pCount;i++){
        cin>>permulte[i];
        permulte[i]--;
    }
    string firstCurr=min(Names[permulte[0]].first,Names[permulte[0]].second);
    string secondMinCurr,secondMaxCurr;
    int i;
    for(i=1;i<pCount;i++){
        secondMinCurr=min(Names[permulte[i]].first,Names[permulte[i]].second);
        if(secondMinCurr>firstCurr) firstCurr=secondMinCurr;
        else {
            secondMaxCurr=max(Names[permulte[i]].first,Names[permulte[i]].second);
            if(secondMaxCurr>firstCurr) firstCurr=secondMaxCurr;
            else{cout<<"NO"; return 0;}
        }
    }
    cout<<"YES";
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}