#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#include <string.h>
#include <math.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	string originalString;
	cin>>originalString;
	std::stack<char> myStack ;
	int originalStringLen=originalString.size();
	if(originalStringLen==1) {cout<<"YES"; return 0;}
	bool isEvenLen;
	int incrementAtMid=0;
	if(originalStringLen%2==0){ isEvenLen=true;}
	else {isEvenLen=false; incrementAtMid=1;}
	int mid=originalStringLen/2;
	for(int i=0;i<mid;i++){
	    myStack.push(originalString[i]);
	}
	int differentchars=0;
	int popedChar;
	for(int i=mid+incrementAtMid;i<originalStringLen;i++){
	    popedChar=myStack.top();
	    myStack.pop();
	    if(popedChar!=originalString[i]) differentchars++;
	    if(differentchars>1){
	        cout<<"NO";
	        return 0;
	    }
	}
	if(differentchars==0) {
	    if(isEvenLen) cout<<"NO";
	    else {cout<<"YES"; return 0;}
	}
	else cout<<"YES";
	return 0;
}