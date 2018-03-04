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
int wallets[301];
int walletsCount;
void putCoins(int position);
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>walletsCount;
    for(int i=1;i<=walletsCount;i++){
        cin>>wallets[i];
    }
    //no point of sorting wallets as robot cant jump to any position.
    for(int i=1;i<=walletsCount;i++){
        putCoins(i);
    }
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}
void putCoins(int position){
    if(wallets[position]==0 && position<walletsCount) {cout<<"R"; return;}
    if(wallets[position]>0){
        wallets[position]--; cout<<"P";
    }
    if(wallets[position]==0 && position<walletsCount){cout<<"R"; return;}
    if(position>1 && wallets[position]>0) {
        cout<<"LR"; putCoins(position);
    }else if(position<walletsCount && wallets[position]>0){
        cout<<"RL"; putCoins(position);
    }
    
    /*if(position==walletsCount && wallets[position]==0 && wallets[position-1]==0) return;
    if(wallets[position]>0){wallets[position]--; cout<<"P";}
    if(position>1 && wallets[position-1]>0){
        //go left
        cout<<"L";
        putCoins(position-1);
    }else if(position>1 && wallets[position]>0 ){
        //go left and then right
        cout<<"LR";
        putCoins(position);
    }else if(position<walletsCount && wallets[position+1]>0){
        //go right
        cout<<"R";
        putCoins(position+1);
    }else if(position<walletsCount && wallets[position]>0){
        //go right and then left
        cout<<"RL";
        putCoins(position);
    }else putCoins(position+1);*/
}