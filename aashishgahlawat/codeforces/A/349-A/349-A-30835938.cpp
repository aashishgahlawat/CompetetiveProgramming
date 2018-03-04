#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int CustomerBalance=0;
	int numberOfCustomers=0;
	cin>>numberOfCustomers;
	int Note25=0;
	int Note50=0;
	cin>>CustomerBalance;
	if(CustomerBalance==25){
	    Note25++;
	    numberOfCustomers--;
	    while(numberOfCustomers--){
	        cin>>CustomerBalance;
	        ////////////////////////
	        if(CustomerBalance==25){
	            Note25++;
	        }
	        if(CustomerBalance==50){
	            if(Note25>=1){
	                Note50++;
	                Note25--;
	            }else {cout<<"NO"; return 0;}
	       }
	       if(CustomerBalance==100){
	           if(Note50>=1 && Note25>=1){
	               Note25--;
	               Note50--;
	           }else if(Note25>=3){
	               Note25-=3;
	           }else {
	               cout<<"NO";
	               return 0;
	           }
	        }
	    }
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	return 0;
}