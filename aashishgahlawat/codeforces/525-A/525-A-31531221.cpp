#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
int keysCount[26];//of each alphabet type
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int roomsCount;
	cin>>roomsCount;
	string keysRooms;
	cin>>keysRooms;
	int keysRoomsLen=keysRooms.length();
	int borrow=0;
	for(int i=0;i<keysRoomsLen;i+=2){
	    keysCount[keysRooms[i]-97]++;
	    if(keysCount[keysRooms[i+1]-65]!=0){
	        keysCount[keysRooms[i+1]-65]--;
	    }else {
	        borrow++;
	    }
	}
	cout<<borrow;
	return 0;
}