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
int MOD=1000000007;
long long int answer;
void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}

struct myclass {           // function object type:
  void operator() (int i) {std::cout << ' ' << i;}//() for operator used second () for param
} myobject;//for_each (myvector.begin(), myvector.end(), myobject); in main

bool sortbysec(const pair<int,int> &a,//sort vector by second
              const pair<int,int> &b)
{
    return (a.second < b.second);//.first > in desc first
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    long long ans=0,x=0,mod=1000000007;
    int i;
    string cad;
    cin>>cad;
    for(i=cad.size()-1; i>=0; i--){
        if(cad[i]=='a'){
            ans= (ans+x)%mod;
            x= (x*2)%mod;//1 2 4 8 16 32
        }
        else
        x= (x+1)%mod;//1 2 3 4 5 6
    }
    cout<<ans<<endl;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}