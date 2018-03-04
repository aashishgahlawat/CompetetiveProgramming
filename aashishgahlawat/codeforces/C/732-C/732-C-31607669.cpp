#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	long long int b,s,d;
	cin>>b>>d;
	char greater;
	long long int greaterInt;
	if(d>b) {greater='d'; greaterInt=d;}
	else {greater='b'; greaterInt=b;}
	cin>>s;
	if(s>greaterInt) {greaterInt=s; greater='s';}
	long long int minStay;
	long long int min=0;
	switch(greater){
	    case 'b': 
	    minStay=greaterInt-1;
	    min+=minStay-d;
	    min+=minStay-s;
	    break;
	    case 'd': 
	    minStay=greaterInt;
	    min+=minStay-b-1;
	    min+=minStay-s-1;
	    break;
	    case 's':
	    minStay=greaterInt-1;
	    min+=minStay-b;
	    min+=minStay-d;
	    break;
	}
	if(b==d && d==s) {cout<<0; return 0;} //b==d==s wont work...
	if((b==d && d==greaterInt) || (b==s && b==greaterInt) || (s==d && d==greaterInt)) min++;
	cout<<min;
	return 0;
}