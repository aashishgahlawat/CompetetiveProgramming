#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numberOfDays;
	cin>>numberOfDays;
	int minWalks;
	cin>>minWalks;
	int Days[numberOfDays];
	for(int i=0;i<numberOfDays;i++){
	    cin>>Days[i];
	}
	int extraWalks=0;
	int temp;
	for(int i=1;i<numberOfDays;i++){
	    temp=Days[i-1]+Days[i];
	    if(temp>=minWalks){
	        //do nothing
	    }else {
	        extraWalks+=minWalks - temp;
	        Days[i]+=minWalks- temp;
	    }
	}
	cout<<extraWalks<<endl;
	for(int i=0;i<numberOfDays;i++){
	    cout<<Days[i]<<" ";
	}
	return 0;
}