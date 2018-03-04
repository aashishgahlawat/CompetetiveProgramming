#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
int inPocket;
int house=1234567;
int car=123456;
int computer=1234;
bool isIt;
void dfs();
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	cin>>inPocket;
	int PH=inPocket/house;
	int PC=inPocket/car;
	for(int a=0;a<=PH;a++){
	   for(int b=0;b<=PC;b++){
	       if((inPocket-(a*house)-(b*car))>=0 && (inPocket-(a*house)-(b*car))%computer==0 ){
	       cout<<"YES"; return 0;}
	   } 
	}
	cout<<"NO";
	return 0;
}