#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int a,b;
	cin>>a>>b;
	int aWin=0,bWin=0,tie=0;
	for(int i=1;i<7;i++){
	    if(abs(a-i)==abs(b-i)) tie++;
	    if(abs(a-i)<abs(b-i)) aWin++;
	    if(abs(b-i)<abs(a-i)) bWin++;
	}
	cout<<aWin<<" "<<tie<<" "<<bWin;
	return 0;
}