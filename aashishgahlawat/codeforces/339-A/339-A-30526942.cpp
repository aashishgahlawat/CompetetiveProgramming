#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	string input;
	cin>>input;
	int index=0;
	for(int i=0;i<input.length();i+=2){
	    index=i;
	    for(int j=i;j<input.length();j+=2){
	        if(input[j]<input[i]){
	            index=j;
	            char temp=input[j];
	            input[j]=input[i];
	            input[i]=temp;
	        }
	    }
	}
	std::cout << input;
	return 0;
}