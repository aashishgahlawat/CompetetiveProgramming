#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int number;
	cin>>number;
	/*
	print dashes till number then 0 to till i and then i to till 0
	dashes--
	if i=number
	dashes++
	*/
	for(int i=0;i<=number;i++){
	    for(int j=i;j<number;j++){
	        cout<<" "<<" ";
	    }
	    for(int k=0;k<i;k++){
	        cout<<k<<" ";
	    }
	    for(int l=i;l>=0;l--){
	        if(l==0) cout<<l;
	        else cout<<l<<" ";
	    }
	    cout<<endl;
	}
	for(int i=number-1;i>=0;i--){
	    for(int j=number;j>i;j--){
	        cout<<" "<<" ";
	    }
	    for(int k=0;k<i;k++){
	        cout<<k<<" ";
	    }
	    for(int l=i;l>=0;l--){
	        if(l==0) cout<<l;
	        else cout<<l<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}