#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int nOfPri;
	cin>>nOfPri;
	int crimeConstr;
	cin>>crimeConstr;
	int toSend;
	cin>>toSend;
	int crimeLev[nOfPri];
	//for(int i=0;i<nOfPri;i++) cin>>crimeLev[i];
	int currentCount=0;
	for(int i=0;i<nOfPri;i++){
	    cin>>crimeLev[i];
	    if(
	        crimeLev[i]<=crimeConstr){
	            currentCount++;
	    }else {
	        if(currentCount- toSend>=0){ ans+=currentCount- toSend+1;}
	        currentCount=0;
	    }
	    if(i==nOfPri-1) if(currentCount- toSend>=0){ ans+=currentCount- toSend+1;}
	}
	cout<<ans;
	return 0;
}