#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
int Divisors[1000002];
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int number;
	cin>>number;
	int dividibelBy=0;
	for(int i=0;number!=0;i++){
	    if(number-2!=1){number-=2;
	        Divisors[i]=2;
	    }else{ number-=3;
	        Divisors[i]=3;
	    }
	    dividibelBy++;
	}
	cout<<dividibelBy<<endl;
	for(int i=0;i<dividibelBy;i++){
	    cout<<Divisors[i]<<" ";
	}
	return 0;
}