#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int numberOfTestCases;
	cin>>numberOfTestCases;
	if(numberOfTestCases>=1 && numberOfTestCases<=100){
	    while(numberOfTestCases--){
	    string letter;
	    cin>>letter;
	    int letterLength=letter.length();
	    if(letterLength>10){
	        if(letterLength==11){
	            cout<<letter[0]<<"9"<<letter[letterLength-1]<<endl;
	        }else {
	            cout<<letter[0]<<letterLength-2<<letter[letterLength-1]<<endl;
	        }
	    }else {std::cout << letter << std::endl;}
	    }  
	}
	return 0;
}