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
int dp[45];//till 44
int answer[3];
int main() {
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	long long int number;
    cin>>number;
    dp[0]=0;
    dp[1]=1;
    long long int num=0;
    long long int i;
    for(i=2;num<=1000000000;i++){
        num=dp[i-1]+dp[i-2];
        dp[i]=num;
    }
    
    int counter=0;
    for(int i=45;i>=0;i--){
        if(dp[i]>number) continue;
        if(counter<4){
            answer[counter]=dp[i];
            counter++;
            number-=dp[i];
        }else break;
    }
    if(number==0){
        cout<<answer[0]<<" "<<answer[1]<<" "<<answer[2];
    }else cout<<"I'm too stupid to solve this problem";
	#ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
	#endif // LOCAL
	return 0;
}