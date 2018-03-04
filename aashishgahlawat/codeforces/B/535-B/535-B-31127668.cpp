#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int number;
	cin>>number;
	int remainder=0;
	int sumofPossibles=0;
	int temp=1;
	while(number!=0){
	    remainder=number%10;
	    if(remainder==4) sumofPossibles+=temp*1;//4 only one possibility
	    else sumofPossibles+=temp*2;//7,4 2 possibility
	    temp*=2;//as digits increase possibility doubles...
	    number/=10;
	}
	cout<<sumofPossibles;
	return 0;
}