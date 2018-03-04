#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfTestCases;
	cin>>numberOfTestCases;
	///////////////////////
	long int sum[3],value=0;
	for(int i=0;i<3;i++) sum[i]=0;
	//////////////////////////////
	for(int i=0;i<3;i++){
	    for(int j=0;j<numberOfTestCases;j++){
	        cin>>value;
	        sum[i]+=value;
	    }
	    numberOfTestCases--;
	}
	/////////////////////////////////////////
	long int first_missing_number=0,second_missing_number=0;
	first_missing_number=sum[0] - sum[1];
	second_missing_number=sum[0] - first_missing_number - sum[2];
	cout<<first_missing_number<<endl<<second_missing_number;
	return 0;
}