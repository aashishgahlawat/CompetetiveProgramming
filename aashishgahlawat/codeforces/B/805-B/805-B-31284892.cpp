#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int len;
	cin>>len;
	if(len<3){
	    while(len--)
	    cout<<"a";
	    return 0;
	}else{ // for sure its either 3 or greater...
	    string s="aa";
	    for(int i=2;i<len;i++){
	        if(s[i-2]=='a') s+="b";
	        if(s[i-2]=='b') s+="a";
	        //if(s[i-2]=='c') s+="a";
	    }
	    cout<<s;
	}
	return 0;
}