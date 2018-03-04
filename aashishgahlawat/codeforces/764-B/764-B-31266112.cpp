#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int valCount;
	cin>>valCount;
	int vals[valCount];
	for(int i=0;i<valCount;i++){
	    cin>>vals[i];
	}
	int mid=valCount/2;
	int temp;
	valCount--;
	for(int i=0;i<mid;i+=2){
	    temp=vals[i];
	    vals[i]=vals[valCount-i];
	    vals[valCount-i]=temp;
	}
	for(int i=0;i<=valCount;i++){
	    cout<<vals[i]<<" ";
	}
	return 0;
}