#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int plusXY[2005],minusXY[2005];
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int numOfBishops;
	cin>>numOfBishops;
	int xi,yi;
	for(int i=1;i<=numOfBishops;i++){
	    cin>>xi>>yi;
	    plusXY[xi+yi]++;
	    minusXY[xi-yi+1000]++;
	}
	long long int fights=0;
	for(long long int i=1;i<=2005;i++){
	    fights+=((plusXY[i]*(plusXY[i]-1))/2);
	    //n(n-1)/2 combinations each edge , n equals numOfBishops on edge i
	    fights+=((minusXY[i]*(minusXY[i]-1))/2);
	}
	cout<<fights;
	return 0;
}