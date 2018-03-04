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
	int daysWork;
	cin>>daysWork;
	int days[daysWork];
	int requToFinish;
	cin>>requToFinish;
	for(int i=0;i<daysWork;i++){
	    cin>>days[i];
	}
	int daysReq=0;
	int curr;
	for(int i=0;i<daysWork;i++){
	     curr=86400;
	     curr-=days[i];
	     if(curr>0){requToFinish-=curr;}
	     daysReq++;
	     if(requToFinish<1) break;
	}
	cout<<daysReq;
	
	return 0;
}