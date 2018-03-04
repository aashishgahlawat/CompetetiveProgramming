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

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    int cSize;
    cin>>cSize;
    string cockroach;
    cin>>cockroach;
    bool flag;
    int red=0,black=0;
    int firstAnswer;
    int secondAnswer;
    //red starting case
    for(int i=0;i<cSize;i++){
        if(i%2==0){
            //true for odd
            if(cockroach[i]!='r') black++;
        }else if(cockroach[i]!='b') red++;
    }
    int swaps=min(red,black);
    int recolor=max(red,black)-swaps;
    //cout<<swaps<<recolor<<endl;
    firstAnswer=recolor+swaps;
    //cout<<firstAnswer<<endl;
    red=0,black=0;
    //black starting case
    for(int i=0;i<cSize;i++){
        if(i%2==0){
            //true for odd
            if(cockroach[i]!='b') red++;
        }else if(cockroach[i]!='r') black++;
    }
    swaps=min(red,black);
    recolor=max(red,black)-swaps;
    secondAnswer=swaps+recolor;
    //cout<<swaps<<recolor<<endl;
    //cout<<secondAnswer<<endl;
    cout<<(min(firstAnswer,secondAnswer));
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}