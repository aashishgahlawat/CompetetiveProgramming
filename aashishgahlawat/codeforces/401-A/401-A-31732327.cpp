#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
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
	int numOfCards;
	int max;
	cin>>numOfCards>>max;
	int temp;
	int positiveSum=0,negativeSum=0;
	for(int i=0;i<numOfCards;i++){
	    cin>>temp;
	    if(temp>0) positiveSum+=temp;
	    if(temp<0) negativeSum+=abs(temp);
	}
	int diff=positiveSum- negativeSum;
	if(diff==0){cout<<0; return 0;}
	int remove=0;
	if(diff>0){
	    while(diff>0){
	        diff-=max;
	        remove++;
	    }
	}
	else if(diff<0){
	    while(diff<0){
	        diff+=max;
	        remove++;
	    }
	}
	cout<<remove;
	return 0;
}