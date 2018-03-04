#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	long long int numbersRange;
	long long int aNumber;
	long long int mNumber;
	cin>>numbersRange>>mNumber;
	if(numbersRange==1){
	    cout<<mNumber;
	    return 0;
	}
	int rVal=numbersRange- mNumber;
	int lVal=numbersRange- rVal-1;//exclusive i.e. -1
	if(lVal>=rVal) aNumber=mNumber-1;
	else aNumber=mNumber+1;
	cout<<aNumber;
	return 0;
}