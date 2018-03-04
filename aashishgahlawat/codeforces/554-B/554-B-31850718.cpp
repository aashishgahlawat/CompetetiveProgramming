#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
long long int dp[101];
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int numOfRC;
	cin>>numOfRC;
	int temp;
	string num;
	for(int i=1;i<=numOfRC;i++){
	    cin>>num;
	    for(int j=1;j<=numOfRC;j++){
	        if(num[j-1]=='1'){ dp[i]+=pow(j,3);}
	        //pow(2,4)=16 least pow of 2 such that next pow(4,4)=256>100 to avoid collision yet pow 3 worked fine...
	        // pow(2,3)=8+8=16+16=32+32=64 can collide with pow(4,3)=64
	    }
	}
	dp[0]=-1;//avoid recounting 0
	sort(dp,dp+numOfRC+1);
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
	}
	if(current>counter) counter=current;
	if(current==numOfRC) counter=current;
	cout<<counter;
	return 0;
}