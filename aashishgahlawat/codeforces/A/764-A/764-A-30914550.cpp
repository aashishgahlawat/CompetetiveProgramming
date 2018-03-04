#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int CallFluency;
	int ArtistFluency;
	int maxPermissibleTime;
	cin>>CallFluency>>ArtistFluency>>maxPermissibleTime;
	if(CallFluency==1 || ArtistFluency%CallFluency==0){
	    cout<<maxPermissibleTime/ArtistFluency;
	    return 0;
	}
	int c=CallFluency;
	int a=ArtistFluency;
	int removed=0;
	for(;ArtistFluency<=maxPermissibleTime;){
	    while(CallFluency<ArtistFluency)
	    CallFluency+=c;
	    if(ArtistFluency%CallFluency==0) removed++;
	    ArtistFluency+=a;
	    
	}
	cout<<removed;
	return 0;
}