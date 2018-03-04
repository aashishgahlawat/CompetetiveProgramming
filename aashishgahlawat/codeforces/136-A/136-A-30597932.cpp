#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfFriends;
	int number;
	cin>>numberOfFriends;
	int finalArray[numberOfFriends+1];
	int initialArray[numberOfFriends+1];
	for(int i=1;i<=numberOfFriends;i++){
	    cin>>number;
	    finalArray[number]=i;
	}
	for(int i=1;i<=numberOfFriends;i++){
	    std::cout << finalArray[i]<<" ";
	}
	return 0;
}