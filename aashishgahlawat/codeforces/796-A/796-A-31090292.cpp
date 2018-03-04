#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numberOfHouses;
	int crushHouseNumber;
	int dollarsInPocket;
	cin>>numberOfHouses>>crushHouseNumber>>dollarsInPocket;
	int housesArray[numberOfHouses+1];
	int purchasablehouses[numberOfHouses-1]; //as least one will be occupied by his crush...
	int x=0;
	for(int i=1;i<=numberOfHouses;i++){
	    cin>>housesArray[i];
	    if(housesArray[i]<=dollarsInPocket && housesArray[i]!=0){
	        purchasablehouses[x]=i;
	        x++;
	    }
	}
	int closest=999;//constrain is 100
	for(int i=0;i<x;i++){
	    if(abs(crushHouseNumber- purchasablehouses[i] )<closest) closest=abs(crushHouseNumber- purchasablehouses[i]);
	}
	if(closest==999) cout<<-1;
	else cout<<closest*10;
	return 0;
}