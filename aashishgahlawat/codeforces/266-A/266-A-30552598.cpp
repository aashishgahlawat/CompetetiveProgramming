#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfStones;
	cin>>numberOfStones;
	string storesOrder;
	cin>>storesOrder;
	int counter=0;
	for(int i=0;i<numberOfStones;i++){
	  if(storesOrder[i]=='R' && storesOrder[i+1]=='R') counter++;
	  if(storesOrder[i]=='G' && storesOrder[i+1]=='G') counter++;
	  if(storesOrder[i]=='B' && storesOrder[i+1]=='B') counter++;
	}
	std::cout << counter;
	return 0;
}