#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfDigits;
	int maxSeq=1,currentMaxSeq=1;
	cin>>numberOfDigits;
	long int previousNumber,currentNumber;
	cin>>previousNumber;
	for(int i=0;i<numberOfDigits;i++){
	    cin>>currentNumber;
	    if(currentNumber>=previousNumber){
	        currentMaxSeq++;
	        previousNumber=currentNumber;
	    }else if(currentNumber<previousNumber){
	        if(currentMaxSeq>maxSeq){
	            maxSeq=currentMaxSeq;
	        }
	        currentMaxSeq=1;
	        previousNumber=currentNumber;
	    }
	}
	if(currentMaxSeq>maxSeq) maxSeq=currentMaxSeq-1;
	cout<<maxSeq;
	return 0;
}