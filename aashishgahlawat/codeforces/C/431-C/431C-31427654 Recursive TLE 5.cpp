#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve(int sum,bool found);
int ans=0;
int n,k,d;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	cin>>n>>k>>d;
	solve(0,false);
	if(ans>=1e9+7) ans-=1e9+7;
	cout<<ans;
	return 0;
}
void solve(int sum,bool found){
    if(sum==n && found==true){
        ans++;
        return;
    }
    
    if(sum>n) {return;}
    
    for(int i=1;i<=k;i++){
        sum+=i;
        if(i>=d) found=true;
        if(sum+1>n && found==false) break;
        solve(sum,found);
        sum-=i;
    }
    return;
}