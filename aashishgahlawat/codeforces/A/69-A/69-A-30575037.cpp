#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfCordinates;
	int xSum=0,ySum=0,zSum=0;
	int x,y,z;
	cin>>numberOfCordinates;
	while(numberOfCordinates--){
	    cin>>x>>y>>z;
	    xSum+=x;
	    ySum+=y;
	    zSum+=z;
	}
	if(xSum==0 && ySum==0 && zSum==0){
	    cout<<"YES";
	}else cout<<"NO";
	return 0;
}