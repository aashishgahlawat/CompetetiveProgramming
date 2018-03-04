#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	char input[100001];
	cin>>input;
	char *FirstOccuarnceOfSubtrringAdd;
	//BOTH EXISTS NON NEGATIVE VALUE ADD. RETURNED
	if((FirstOccuarnceOfSubtrringAdd=strstr(input,"AB")) && strstr(FirstOccuarnceOfSubtrringAdd+2,"BA")){
	    cout<<"YES";
	    
	}else if((FirstOccuarnceOfSubtrringAdd=strstr(input,"BA")) && strstr(FirstOccuarnceOfSubtrringAdd+2,"AB")){
	    cout<<"YES";
	}else cout<<"NO";
	return 0;
}