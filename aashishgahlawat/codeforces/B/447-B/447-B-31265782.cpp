#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	string inputString;
	cin>>inputString;
	int slen=inputString.length();
	int toInsert;
	cin>>toInsert;
	int alphaVal[26];
	int maxAlpha=0;
	for(int i=0;i<26;i++){
	    cin>>alphaVal[i];
	    if(alphaVal[i]>maxAlpha) maxAlpha=alphaVal[i];
	}
	long long int sum=0;
	for(int i=0;i<slen;i++){
	    sum+=(i+1)*alphaVal[inputString[i]-97];
	}
	int gohere=slen+toInsert;
	for(int i=slen+1;i<=gohere;i++){
	    sum+=maxAlpha*i;
	}
	cout<<sum;
	return 0;
}