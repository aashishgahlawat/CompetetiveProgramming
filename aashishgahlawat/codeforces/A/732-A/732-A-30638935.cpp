#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int eachShovlePrice;
	int spareCoin;
	int temp=1,i=1;
	cin>>eachShovlePrice>>spareCoin;
	for(i=1;;i++){
	    temp=eachShovlePrice*i;
	    if(temp%10==0 || temp%10==spareCoin){
	        cout<<i;
	        break;
	    }
	}
	return 0;
}