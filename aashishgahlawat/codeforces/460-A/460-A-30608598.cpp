#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int preSocks;
	int rebuy;
	cin>>preSocks>>rebuy;
	int days=0;
	while(preSocks){
	    days++;
	    preSocks--;
	    if(days%rebuy==0) preSocks++;
	}
	std::cout << days << std::endl;
	return 0;
}