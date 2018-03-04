#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
#define endl '\n'
using namespace std;
int currSum=0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int k;
	cin>>k;
	string number;
	cin>>number;
	int i=0;
	int numLen=number.length();
	int numArr[numLen];
	for(i=0;i<numLen;i++){
	    numArr[i]=number[i]-48;
	    currSum+=numArr[i];
	}
	//int z=sizeof(numArr)/sizeof(numArr[0]);
	sort(numArr,numArr+numLen);
	if(currSum>=k){
	    cout<<0;
	    return 0;
	}
	int indexChanged=0;
	for(int j=0;j<numLen;j++){
	    if(numArr[j]<9){
	        currSum+=(9- numArr[j]);
	        //numArr[j]=9; acutally no need...
	        indexChanged++;
	        if(currSum>=k){
	            cout<<indexChanged;
	            return 0;
	        }
	    }
	}
	return 0;
}