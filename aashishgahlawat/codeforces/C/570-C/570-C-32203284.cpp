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
int dp[300000];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    int sLen;
    cin>>sLen;
    string problem;
    int tests;
    cin>>tests;
    cin>>problem;
    int index;
    char change;
    char temp;
    long long int answer=0;
    for(int i=0;i<sLen;i++){
        if(problem[i]=='.'){
            while(problem[i]=='.'){
                answer++;
                i++;
            }
            answer--;
        }
    }
    //////////////////////////
    auto PrintOutAnswer = [&]() {//cant be by [=]
        cout<<answer<<endl;
    };
    /////////////////////////
    while(tests--){
        cin>>index>>change;
        temp=problem[index-1];
        problem[index-1]=change;
        if(change=='.' && temp=='.') {PrintOutAnswer(); continue;}
        if(change=='.'){
            if(problem[index-2]=='.' && problem[index]=='.'){
                answer+=2;
            }else if(problem[index-2]=='.' || problem[index]=='.')
                answer++;
        }else {
            if(temp=='.'){
                if(problem[index-2]=='.' & problem[index]=='.'){
                    answer-=2;
                }else if(problem[index-2]=='.' || problem[index]=='.'){
                    answer--;
                }
            }
        }

    /*for(int i=0;i<sLen;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;*/
    PrintOutAnswer();
    //problem[index-1]=temp;//no replacement
    }
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.";
    #endif // LOCAL
    return 0;
}