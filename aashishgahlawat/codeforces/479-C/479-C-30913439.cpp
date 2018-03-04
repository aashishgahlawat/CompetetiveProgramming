#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int tests;
	cin>>tests;
	std::vector<pair<int,int>> myVector(tests) ;
	int a,b;
	int max;
    for(int i=0;i<tests;i++){
	    cin>>a>>b;
	    myVector[i]={a,b};
	}
	sort(myVector.begin(),myVector.end());
	max=myVector[0].second;
	for(int i=0;i<tests-1;i++){
	    if(myVector[i+1].second>=max)max=myVector[i+1].second;
        else max = myVector[i+1].first;
	}
	cout<<max;
	return 0;
}