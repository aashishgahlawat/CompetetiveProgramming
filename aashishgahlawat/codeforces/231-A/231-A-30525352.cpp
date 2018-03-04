#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int petya,vasya,tonya;
	int couter=0;
	int total=0;
	int numberOfProblems;
	cin>>numberOfProblems;
	for(int i=0;i<numberOfProblems;i++){
	    cin>>petya>>vasya>>tonya;
	    if(petya==1) couter++;
	    if(vasya==1) couter++;
	    if(tonya==1) couter++;
	    if(couter>=2) total++;
	    couter=0;
	}
	cout<<total;
	return 0;
}