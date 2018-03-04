#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,time;
	int numberofChildren;
	string listedchildern;
	cin>>numberofChildren>>time>>listedchildern;
	while(time--){
	    i=0;
	    while(i<numberofChildren){
	        if(listedchildern[i]=='B' && listedchildern[i+1]=='G'){
	            listedchildern[i]='G';
	            listedchildern[i+1]='B';
	            i+=2;
	        }else i++;
	    }
	}
	std::cout << listedchildern << std::endl;
	return 0;
}