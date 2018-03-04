#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int rows=5,columns=5;
	int rowNumber=0,columnNumber=0;
	int digit;
	for(int i=1;i<=rows;i++){
	    for(int j=1;j<=columns;j++){
	        cin>>digit;
	        if(digit==1){
	            columnNumber=j;
	            rowNumber=i;
	            break;
	        }
	    }
	}
	
	int number_of_row_moves_needed;
	int number_of_column_moves_needed;
	number_of_row_moves_needed=abs(3 - rowNumber);
	number_of_column_moves_needed=abs(3 - columnNumber);
	int totalMovesNeeded=number_of_row_moves_needed+number_of_column_moves_needed;
	std::cout << totalMovesNeeded << std::endl;
	
	return 0;
}