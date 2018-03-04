#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int numOfRC;
	cin>>numOfRC;
	int temp;
	long long int dp[numOfRC+1];
	int z=sizeof(dp)/sizeof(dp[0]);
	fill(dp,dp+z,0);
	dp[0]=-1;
	string num;
	//bool n_n[numOfRC+1][numOfRC+1];
	for(int i=1;i<=numOfRC;i++){
	    cin>>num;
	    for(int j=1;j<=numOfRC;j++){
	        if(num[j-1]=='1'){ dp[i]+=pow(j,3);}//n_n[i][j]=true;}
	        //else n_n[i][j]=false;
	    }
	}
	sort(dp,dp+z);
	
	int counter=1;
	int current=1;
	for(int i=2;i<=numOfRC;i++){
	    if(dp[i]==dp[i-1]){ 
	        current++;
	    }else {
	        if(current>counter){
	            counter=current;} 
	        current=1;
	    }
	    if(current>counter) counter=current;
	    if(current==numOfRC) counter=current;
	}
	cout<<counter;
	return 0;
}