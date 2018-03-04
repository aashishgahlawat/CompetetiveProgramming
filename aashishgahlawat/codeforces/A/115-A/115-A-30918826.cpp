#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int employeeCount;
	cin>>employeeCount;
	int employee[employeeCount+1];  //employee tree consisting of several sub trees (forest)
	for(int i=1;i<=employeeCount;i++){
	    cin>>employee[i];
	}
	int maxTreeHeigth=0;
	int currentSubTreeHeight=0;
	int predecessor=0;
	for(int i=1;i<=employeeCount;i++){
	    currentSubTreeHeight=1;//least one node exist if entering the loop
	    predecessor=i;
	    while(employee[predecessor]!=-1){   //superior i.e. above it isn't -1
	        predecessor=employee[predecessor];
	        currentSubTreeHeight++;
	    }
	    if(currentSubTreeHeight>maxTreeHeigth) maxTreeHeigth=currentSubTreeHeight;
	}
	cout<<maxTreeHeigth;
	return 0;
}