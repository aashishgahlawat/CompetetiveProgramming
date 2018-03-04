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
int nCities,nEdges,unAllowedCount;
std::vector<pair<int,int>> unAllowed;
bool dp[1001];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>nCities;
    //nEdges=nCities-1;
    cin>>unAllowedCount;
    int firstCity,secondCity;
    for(int i=0;i<unAllowedCount;i++){
        cin>>firstCity>>secondCity;
        //unAllowed.pb(mp(firstCity,secondCity));
        dp[firstCity]=true;
        dp[secondCity]=true;
    }

    int centreNode=0;//for star graph...
    for(int i=1;i<=nCities;i++){
        if(!dp[i]){centreNode=i; break;}
    }
    //cout<<centreNode<<endl;
    std::vector<int> answer;
    for(int i=1;i<=nCities;i++){
        if(i!=centreNode){
            //avoid self referencing node
            answer.pb(i);
        }
    }
    cout<<answer.size()<<endl;
    for(int i=0;i<answer.size();i++){
        cout<<centreNode<<" "<<answer[i]<<endl;
    }


    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}