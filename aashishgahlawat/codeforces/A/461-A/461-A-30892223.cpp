#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
long long int sum=0;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numberOfValues;
	cin>>numberOfValues;
	int ValuesArray[numberOfValues];
	for(int i=0;i<numberOfValues;i++){
	    cin>>ValuesArray[i];
	    sum+=ValuesArray[i];
	}
	sum*=2;
	if(numberOfValues==1){
	    cout<<sum/2;
	    return 0;
	}
	int z=sizeof(ValuesArray)/sizeof(ValuesArray[0]);
	sort(ValuesArray,ValuesArray+z,greater<int>());
	long long int sumArray[numberOfValues];
	sumArray[0]=ValuesArray[0];
	for(int i=1;i<numberOfValues;i++){
	    sumArray[i]=ValuesArray[i]+sumArray[i-1];
	}
	for(int i=1;i<numberOfValues-1;i++) sum+=sumArray[i];
	cout<<sum;
	return 0;
}