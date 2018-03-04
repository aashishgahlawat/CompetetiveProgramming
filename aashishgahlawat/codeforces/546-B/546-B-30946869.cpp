#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
int LookUp[300005];
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numberOfValues;
	cin>>numberOfValues;
	int MyArray[numberOfValues];
	for(int i=0;i<numberOfValues;i++) {
	    cin>>MyArray[i];
	}
	int z=sizeof(MyArray)/sizeof(MyArray[0]);
	//fill(LookUp,LookUp+300005,-1);
	sort(MyArray,MyArray+z);
	int addedCoins=0;
	for(int i=0;i<numberOfValues;i++){
	   while(LookUp[MyArray[i]]==MyArray[i]){
	       MyArray[i]++;
	       addedCoins++;
	   } 
	   LookUp[MyArray[i]]=MyArray[i];
	}
	cout<<addedCoins;
	return 0;
}