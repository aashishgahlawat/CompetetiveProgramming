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
//std::vector<pair<int,int > male;
//std::vector<pair<int,int > female;
int Mdp[367];
int Fdp[367];
int startDate,endDate;
int Fcount;
void fillDP(char gender);
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>Fcount;
    char gender;
    for(int i=0;i<Fcount;i++){
        cin>>gender>>startDate>>endDate;
        //if(gender=='M') male.pb(make_pair(startDate,endDate));
        //else female.pb(make_pair(startDate,endDate));
        fillDP(gender);
    }
    int currMin=0;
    int minofTwo;
    for(int i=1;i<367;i++){
        minofTwo=min(Mdp[i],Fdp[i]);
        if(minofTwo>currMin) currMin=minofTwo;
    }
    cout<<currMin*2;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}
void fillDP(char gender){
    if(gender=='M'){
        //fill male dp
        for(int i=startDate;i<=endDate;i++){
            Mdp[i]++;
        }
    }else {
        //fill female dp
        for(int i=startDate;i<=endDate;i++){
            Fdp[i]++;
        }
    }
}