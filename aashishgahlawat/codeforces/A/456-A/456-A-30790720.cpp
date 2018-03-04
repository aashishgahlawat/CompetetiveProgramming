#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	// your code goes here
	int numberOfLaptops;
	cin>>numberOfLaptops;
	int price,quality;
	std::vector<pair<int,int>> myVector(numberOfLaptops);
	for(int i=0;i<numberOfLaptops;i++){
	    cin>>price>>quality;
	    myVector[i]={price,quality};
	}
	sort(myVector.begin(),myVector.end());//sorted by price,so accessing second and not first
	for(int i=0;i<numberOfLaptops-1;i++){//-1 as to keep bound value at 19th line
	    int pre=myVector[i].second;
	    int post=myVector[i+1].second;//next's quality
	    if(pre-post>0){
	        cout<<"Happy Alex";
	        return 0;}
	}
	cout<<"Poor Alex";
	return 0;
}