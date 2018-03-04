#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int MOD=1e9+7;
std::vector<vector<int>> memorize(2005) ;//factors of each till MaxNum
int dp[2005][2005];
int calculate(int x,int y);

void factorizeN(int N){
    for(int i=1;i<=N;i++){
        if(N%i==0){
            memorize[N].push_back(i);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int MaxNum,digits;
	cin>>MaxNum>>digits;
	for(int i=1;i<=MaxNum;i++) factorizeN(i);//amoritized pre processed work...
	int result=0;
	for(int i=1;i<=MaxNum;i++){
	    result+=calculate(digits-1,i);//digits-1 as dp is 0 else if dp=-1 then digits
	    result%=MOD;
	}
	cout<<result;
	return 0;
}
int calculate(int currIndexK,int lastLen){
    if(currIndexK==0) return 1;//for 1111..22...such lists
    else if(dp[currIndexK][lastLen]>0) return dp[currIndexK][lastLen];
    //as vector index start from 0
    else{
    for(int i=0;i<memorize[lastLen].size();i++){
        dp[currIndexK][lastLen]+=calculate(currIndexK-1,memorize[lastLen][i]);
        if(dp[currIndexK][lastLen]>MOD)
        dp[currIndexK][lastLen]%=MOD;
    }
    return dp[currIndexK][lastLen];
    }
}