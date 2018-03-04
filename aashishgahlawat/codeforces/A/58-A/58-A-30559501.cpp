#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	string message;
	cin>>message;
	string helloMessage="hello";
	int helloMessagePointer=0;
	for(int i=0;i<message.length();i++){
	    if(message[i]==helloMessage[helloMessagePointer]) helloMessagePointer++;
	    if(helloMessagePointer==5) break;
	}
	if(helloMessagePointer==5){
	    std::cout << "YES";
	}else cout<<"NO";
	return 0;
}