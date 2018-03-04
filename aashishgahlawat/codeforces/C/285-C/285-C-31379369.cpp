#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int ElementsCount;
	cin>>ElementsCount;
	long long int myArray[ElementsCount];
	long long int steps=0;
	for(int i=0;i<ElementsCount;i++){
	    cin>>myArray[i];
	    if(myArray[i]<=0){
	        steps+=abs(myArray[i])+1;
	        myArray[i]=1;
	    }
	}
	int z=sizeof(myArray)/sizeof(myArray[0]);
	sort(myArray,myArray+z);
	for(int i=1;i<ElementsCount;i++){
	    if(myArray[i]<=myArray[i-1]){ 
	        steps+=(myArray[i-1]- myArray[i]+1);
	        myArray[i]=myArray[i-1]+1;
	    }else if(myArray[i]>myArray[i-1]+1){
	        steps+=myArray[i]- myArray[i-1]-1; 
	        myArray[i]-=(myArray[i]- myArray[i-1]-1);
	    }//else if(myArray[i]==myArray[i-1]+1) steps++;
	}

	cout<<steps;
	return 0;
}