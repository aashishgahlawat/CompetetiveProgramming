#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int number;
	cin>>number;
	int numArray[8];
	int i;//number of digits
	int largestDigit=0;//no more than largest digit
	for(i=0;number;i++){
	    numArray[i]=number%10;
	    if(numArray[i]>largestDigit) largestDigit=numArray[i];
	    number/=10;
	}
	cout<<largestDigit<<endl;
	while(largestDigit--){
	    int temp=0;
	    for(int z=i-1;z>=0;z--){
	        if(numArray[z]>0){
	            cout<<"1"; temp++;
	        }else {
	            if(temp==0) cout<<" ";//if becomes zero i.e. all done no next
	            else cout<<"0";
	        }
	        numArray[z]--;
	    }
	    cout<<" ";//for next..
	}
	return 0;
}