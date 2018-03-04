#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	string s,t;
	cin>>s>>t;
	int len=s.length();
	int diff=0;
	for(int i=0;i<len;i++){
	    if(s[i]!=t[i]) diff++;
	}
	//cout<<diff<<" "<<ones<<" "<<onet;
	if(diff%2!=0){cout<<"impossible"; return 0;}
	int eqdiff=diff/2;
	//construct new string with that difference...
	for(int i=0;i<len && eqdiff>0;i++){
	    if(s[i]!=t[i]) {s[i]=t[i];
	    eqdiff--;}
	}
	cout<<s;
	return 0;
}