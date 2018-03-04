#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int a,b;
	cin>>a>>b;
	if(a==0 && b==0){//0 is neither even nor odd interval 0-0
	    cout<<"NO";
	}else {
	    if(abs(a-b)==0 || abs(a-b)==1){
	        cout<<"YES";
	    }else cout<<"NO";
	}
	return 0;
}