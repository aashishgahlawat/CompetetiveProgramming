#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
int calcZerosGone(int ones,int zeros);
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int zeros,ones;
	cin>>zeros>>ones;
	if(ones>zeros*2+2){ cout<<-1; return 0;}
	if(zeros>ones+1){cout<<"-1"; return 0;}
	if(zeros>=ones){//can be more by atmost 1
	while(zeros){
	    if(zeros>0){ cout<<"0"; zeros--;}
	    if(ones>0){ cout<<"1"; ones--;}
	}
	    return 0;
	}
	if(zeros<=ones/2){
	    while(1){
	        if(ones>1) {cout<<"11"; ones-=2;}
	        else break;
	        if(zeros>0){cout<<"0"; zeros--;}
	        else break;
	    }
	    if(ones>0) cout<<"1";
	    if(zeros>0) cout<<"0";
	    return 0;
	}else{
	    //int remains=ones- zeros;
	    together:
	    int remains=calcZerosGone(ones,zeros);
	    //cout<<remains<<endl;
	    while(remains>1){
	        cout<<"11"; remains-=2; ones-=2;
	        cout<<"0"; zeros--;
	    }
	    //cout<<endl<<ones<<" "<<zeros<<endl;
	    if(ones-zeros>1) goto together;
	    while(1){
	        if(ones>0){
	            cout<<"1"; ones--;
	        }else break;
	        if(zeros>0){
	            cout<<"0"; zeros--;
	        }else break;
	    }
	    if(ones>0) cout<<"1";
	    if(zeros>0) cout<<"0";
	    
	    }
	
	return 0;
}
int calcZerosGone(int ones,int zeros){
    int ans=0;
    int curr=0;
    while(ones>zeros){
        curr=ones-zeros;
        ones-=curr;
        zeros-=curr/2;
        ans+=curr;
        
    }
    //cout<<ones<<" "<<zeros<<endl;
    return ans;
}