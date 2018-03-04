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
int alpha[26];
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
    int StLen,Select;
    cin>>StLen>>Select;
    string String;
    cin>>String;
    for(int i=0;i<StLen;i++){
        alpha[String[i]-65]++;
    }
    int z=sizeof(alpha)/sizeof(alpha[0]);
    sort(alpha,alpha+z,greater<int>());
    long long int answer=0;
    //for(int i=0;i<Select;i++) cout<<alpha[i]<<" ";
        //cout<<endl;
    int remains=Select;
    for(int i=0;remains>0;i++){
        if(alpha[i]>remains) alpha[i]=remains;
        answer+=pow(alpha[i],2);
        remains-=alpha[i];
    }
    cout<<answer;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}