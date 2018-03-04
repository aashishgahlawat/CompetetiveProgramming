#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
const int endLimit=1e5+5;
const int MOD=1e9+7;//need to be int else % will return double value
int nr[endLimit];//end limit needs to be const and cant be variable

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int tests,togetherConstrain;
	cin>>tests>>togetherConstrain;
	//for i<k nr[i]=1;
	for(int i=0;i<togetherConstrain;i++){
	    nr[i]=1;
	}
	//for i>=k nr[i]=nr[i-1]+nr[i-k];
	for(int i=togetherConstrain;i<=endLimit;i++){
	    nr[i]=(nr[i-1]+nr[i - togetherConstrain])%MOD;
	    //O(n) time
	}
	nr[0]=0;//for partial sum addition start
	//partial sum i.e. nr[i]=nr[i]...+nr[endLimit];
	for(int i=1;i<endLimit;i++){
	    nr[i]=(nr[i]+nr[i-1])%MOD;
	}
	while(tests--){
	    int start,end;
	    cin>>start>>end;
	    cout<<((nr[end]-nr[start-1])%MOD+MOD)%MOD<<endl;//+MOD to avoid -ve value
	}
	return 0;
}