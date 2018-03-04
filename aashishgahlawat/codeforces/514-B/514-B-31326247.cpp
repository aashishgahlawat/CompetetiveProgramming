#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define endl '\n'
using namespace std;
struct soldiers{
    double x=0;
    double y=0;
};
//if 2 pts lie on same line, have same slope...
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int SoldiersCount;
	double x0,y0;
	cin>>SoldiersCount>>x0>>y0;
	soldiers kill[SoldiersCount];
	std::vector<double> slope(SoldiersCount) ;
	for(int i=0;i<SoldiersCount;i++){
	    cin>>kill[i].x>>kill[i].y;
	    slope[i]=(kill[i].y- y0)/(kill[i].x- x0);
	    if((kill[i].x- x0)==0) slope[i]=INFINITY;
	}
	sort(slope.begin(),slope.end());
	//std::unique
	int counter=1;
	for(int i=1;i<SoldiersCount;i++){
	    if(slope[i]==slope[i-1]){
	        
	    }else counter++;
	}
	cout<<counter;
	return 0;
}