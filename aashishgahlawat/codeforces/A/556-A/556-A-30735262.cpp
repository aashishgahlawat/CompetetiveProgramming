#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	// your code goes here
	int inputLength;
	string input;
	cin>>inputLength>>input;
	int zeros=0,ones=0;
	int minimum;
	for(int i=0;i<inputLength;i++){
	    if(input[i]=='0'){zeros++;}else ones++;
	}
	minimum=min(zeros,ones);
	cout<<inputLength-(minimum*2);
	return 0;
}