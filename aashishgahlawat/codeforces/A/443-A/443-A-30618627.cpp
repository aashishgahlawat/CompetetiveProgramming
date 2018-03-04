#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	string line;
	int flag=0;
	getline(cin,line);
	int alphabets[26];
	for(int i=0;i<26;i++) alphabets[i]=0;
	for(int i=0;i<line.length();i++){
	    if(line[i]>='a' && line[i]<='z'){
	        alphabets[line[i]-97]+=1;
	    }
	}
	for(int i=0;i<26;i++){
	    if(alphabets[i]>0){
	        flag++;
	    }
	}
	cout<<flag;
		return 0;
}