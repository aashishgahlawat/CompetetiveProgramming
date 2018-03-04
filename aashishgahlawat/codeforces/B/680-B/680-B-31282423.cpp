#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int cityCount,officerCity;
	cin>>cityCount>>officerCity;
	int city[cityCount+1];
	for(int i=1;i<=cityCount;i++){
	    cin>>city[i];
	}
	int cought=0;
	if(city[officerCity]==1) cought++;
	int lr=cityCount- officerCity;
	int mid=cityCount/2;
	if(lr>=mid){//go right
	    for(int i=1;i<=cityCount- officerCity;i++){
	        if(city[officerCity+i]==1 && city[officerCity-i]==1 && officerCity-i>=1) cought+=2;
	        else if(city[officerCity+i]==1 && officerCity-i<1) cought++;
	    }
	}
	else {//go left
	    for(int i=1;i<=mid+officerCity-mid;i++){
	        if(city[officerCity+i]==1 && city[officerCity-i]==1 && officerCity+i<=cityCount) cought+=2;
	        else if(city[officerCity-i]==1 && officerCity+i>cityCount) cought++;
	    }
	}
	cout<<cought;
	return 0;
}