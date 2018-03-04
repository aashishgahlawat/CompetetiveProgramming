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
int lInd[26];//last index of abcd...
bool visit[26];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    int pCount,gCount;
    cin>>pCount>>gCount;
    string people;
    cin>>people;
    for(int i=0;i<people.size();i++){
        lInd[people[i]-65]=i;
    }
    int onDuty=0;
    for(int i=0;i<people.size();i++){
        if(!visit[people[i]-65]){
            visit[people[i]-65]=true;
            onDuty++;
        }
        if(onDuty>gCount){cout<<"YES"; return 0;}
        if(visit[people[i]-65] && i==lInd[people[i]-65]) onDuty--;
    }
    cout<<"NO";
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}