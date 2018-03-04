#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int MemorizationDP[1000000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numberofPlanks;
	int plankstoRemove;
	cin>>numberofPlanks>>plankstoRemove;
	int heightofPlanks[numberofPlanks];//of fence
	for(int i=0;i<numberofPlanks;i++){cin>>heightofPlanks[i];}
	fill(MemorizationDP,MemorizationDP+1000000,0);
	for(int i=0;i<plankstoRemove;i++){
	    MemorizationDP[0]+=heightofPlanks[i];
	}
	for(int i=1;i<=numberofPlanks- plankstoRemove;i++){
	    MemorizationDP[i]=MemorizationDP[i-1]- heightofPlanks[i-1]+heightofPlanks[i+plankstoRemove-1];
	}
	int min=MemorizationDP[0];
	int index=0;
	for(int i=1;i<=numberofPlanks- plankstoRemove;i++){

	    if(MemorizationDP[i]<min){ min=MemorizationDP[i]; index=i;}
	}
	cout<<index+1;
	return 0;
}