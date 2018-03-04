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

struct myclass {           // function object type:
  void operator() (int i) {std::cout << ' ' << i;}//() for operator used second () for param
} myobject;//for_each (myvector.begin(), myvector.end(), myobject); in main

bool sortbysec(const pair<int,int> &a,//sort vector by second
              const pair<int,int> &b)
{
    return (a.second < b.second);//.first > in desc first
}
int ff[51],sf[51];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    int n,l;
    cin>>n>>l;
    int temp;
    for(int i=0;i<n;i++){
        cin>>ff[i];
    }
    for(int i=0;i<n;i++){
        cin>>sf[i];
    }
    if(n==1){
        //only one barrier... 
        cout<<"YES";
        return 0;
    }
    bool isEqual=false;
    for(int i=0;i<l;i++){
        isEqual=true;
        for(int i=0;i<n;i++){
            if(ff[i]!=sf[i]){
                isEqual=false;
                break;
            }
        }
        if(isEqual){
            //if difference array will contain all same elements...
            cout<<"YES";
            return 0;
        }else {
            for(int z=0;z<n;z++){
                sf[z]++;
                if(sf[z]==l) sf[z]=0;
            }
            sort(sf,sf+n);
        }
    }
    cout<<"NO";
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}