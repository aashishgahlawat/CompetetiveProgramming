#include <iostream>
using namespace std;
long int table[10][10];
int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<10;i++){
	    table[0][i]=1;  //row
	    table[i][0]=1;  //column
	}
	for(int row=1;row<n;row++){
	    for(int column=1;column<n;column++){
	        table[row][column]=table[row-1][column]+table[row][column-1];
	    }
	}
	std::cout << table[n-1][n-1] << std::endl;
	return 0;
}