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

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    int n;
    int maxi=0;
    cin >> n;
    char ch[n+1];
    int a[n+1];
    int b[n+1];

    for (int i = 1; i <= n; ++i){
        cin >> ch[i] >> a[i] >> b[i];
    }
    //greedy...
    for (int i = 1; i <= 366; ++i){
        int Male = 0, Female = 0;//reset each time
        for (int j = 1; j <= n; ++j){
            if (a[j] <= i && i <= b[j]){
                if (ch[j] == 'F') Female++;
                else Male++;
            }
        }
        maxi = max(maxi, min (Male, Female) * 2);//select max of MIN(for groups of M and F)
    }

    cout << maxi;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}