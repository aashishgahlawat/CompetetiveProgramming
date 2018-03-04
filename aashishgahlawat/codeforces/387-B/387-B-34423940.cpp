//dijkastra without priority queue TLE on test 31 link: http://codeforces.com/contest/20/submission/34416661



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
long long ll_int_max=999999999999;
long long int answer;
priority_queue< pair<long long int,int>, vector <pair<long long int,int>> , greater<pair<long long int,int>> > pq;
void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}
bool sortbysec(const pair<int,int> &a,//sort vector by second
              const pair<int,int> &b)
{
    return (a.second < b.second);//.first > in desc first
}

int minProblems,Prepared_problems;
int prepared_complexities[3001];
int minComplexities[3001];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat

    cin>>minProblems>>Prepared_problems;
    for(int i=0;i<minProblems;i++){
        cin>>minComplexities[i];
    }
    for(int i=0;i<Prepared_problems;i++){
        cin>>prepared_complexities[i];
    }

    for(int i=0;i<minProblems;i++){
        for(int j=0;j<Prepared_problems;j++){
            if(minComplexities[i]==prepared_complexities[j]){
                minComplexities[i]=0;
                prepared_complexities[j]=0;
                break;
            }
        }
    }

    sort(minComplexities,minComplexities+minProblems);
    int iter;
    for(iter=0;iter<minProblems && minComplexities[iter]==0;iter++){}

    if(iter==minProblems){cout<<0; return 0;}

    sort(prepared_complexities,prepared_complexities+Prepared_problems);
    int ptr;
    for(ptr=0;ptr<Prepared_problems && prepared_complexities[ptr]==0;ptr++){}

    for(int i=iter;i<minProblems;i++){
        for(int j=ptr;j<Prepared_problems;j++){
            if(minComplexities[i]<=prepared_complexities[j]){
                minComplexities[i]=0;
                prepared_complexities[j]=0;
                ptr=j;
                break;
            }
        }
    }
    sort(minComplexities,minComplexities+minProblems);
    for(iter=0;iter<minProblems && minComplexities[iter]==0;iter++){}
    cout<<minProblems-iter;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}