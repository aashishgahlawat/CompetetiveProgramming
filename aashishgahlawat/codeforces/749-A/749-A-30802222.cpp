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
	cout<<number/2<<endl;
	while(number!=0){
	    if(number-2!=1){number-=2;
	        cout<<2<<" ";
	    }else{ number-=3;
	        cout<<3<<" ";
	    }
	}
	return 0;
}