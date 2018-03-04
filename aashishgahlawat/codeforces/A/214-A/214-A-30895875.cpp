#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int a2b;    //sq of a plus b
int ab2;    //a plus sq of b
int z;  //dont use count as it already exist in libraries
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	
	cin>>a2b>>ab2;
	for(int a=0;a<=a2b;a++)
	for(int b=0;b<=ab2;b++){
	    if((pow(a,2)+b)==a2b && (a+pow(b,2))==ab2)
	    z++;
	}
	cout<<z;
	
	
	return 0;
}