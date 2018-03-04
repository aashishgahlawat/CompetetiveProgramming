#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	string text;
	string result="";
	cin>>text;
	int textLength=text.length();

	    for(int i=0;i<textLength;++i){
	        char temp=text[i];
	        if(temp<97) temp+=32;
	        if(temp=='a'|| temp=='e'|| temp=='i'|| temp=='o'|| temp=='u' || temp=='y'){
	            
	        }else{result=result+'.'+temp;}
	    }
	    std::cout << result<<endl;
	
	return 0;
}