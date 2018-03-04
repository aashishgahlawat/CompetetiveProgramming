#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	long long int number;
	cin>>number;
	int initialNum=number;
	int powerOfTen;
	cin>>powerOfTen;
	int divisor=pow(10,powerOfTen);
	int eleminated=0;
	int continuousZeros=0;
	int numberOfDigits=0;
	while(number!=0){
	    if(number%10==0){
	        continuousZeros++;
	    }else {eleminated++;}
	    number/=10;
	    numberOfDigits++;
	    if(continuousZeros==powerOfTen){
	        cout<<eleminated;
	        return 0;
	    }
	}
	if(initialNum>0)
	cout<<numberOfDigits-1;
	else cout<<0;
	return 0;
}