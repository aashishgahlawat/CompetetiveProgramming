#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	string name;
	cin>>name;
	name[0]=toupper(name[0]);
	std::cout << name;
	return 0;
}