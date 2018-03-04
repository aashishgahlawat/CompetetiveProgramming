#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int game[1002];
int counter;
bool Check(){
    int i=1;
    for(i=1;i<counter;++i){
        if((game[i]-1)!=game[i-1]) break;
    }
    if(i==counter) return true;//as break -1
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	cin>>counter;
	if(counter==1) {cout<<"YES"; return 0;}
	for(int i=0;i<counter;i++){
	    cin>>game[i];
	}
	if(Check()) {cout<<"YES"; return 0;}
	int temp=counter;
	while(temp--){
	    for(int i=0;i<counter;i++){
	        if(i & 1){//odd case
	            if(game[i]==0) game[i]=counter-1;
	            else game[i]--;
	        }else{//even case
	            if(game[i]==counter-1) game[i]=0;
	            else game[i]++;
	        }
	    }
	    if(Check()) {cout<<"YES"; return 0;}
	}
	cout<<"NO";
	return 0;
}