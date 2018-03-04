#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int numOfDocs;
	cin>>numOfDocs;
	int firstDocSta;
	int curr;
	cin>>curr;
	cin>>firstDocSta;
	int start,add;
	for(int i=0;i<numOfDocs-1;i++){
	    cin>>start>>add;
	    while(start<=curr){
	        start+=add;
	    }
	    curr=start;
	}
	cout<<curr;
	return 0;
}