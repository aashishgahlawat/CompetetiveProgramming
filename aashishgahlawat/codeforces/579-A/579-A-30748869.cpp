#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfBacteriasExpected;
	int count=0;
	cin>>numberOfBacteriasExpected;
	while(numberOfBacteriasExpected!=0){
	    count+=numberOfBacteriasExpected%2;
	    numberOfBacteriasExpected/=2;       //bitwise numberOfBacteriasExpected>>=1;
	}
	cout<<count;
	return 0;
}