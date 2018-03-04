#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfColumns;
	cin>>numberOfColumns;
	int temp;
	int cubes[numberOfColumns];
	for(int i=0;i<numberOfColumns;i++) cin>>cubes[i];
	for(int i=0;i<numberOfColumns;i++){
	    for(int j=0;j<numberOfColumns;j++){
	        if(cubes[j]>cubes[i]){
	            temp=cubes[j];
	            cubes[j]=cubes[i];
	            cubes[i]= temp;
	        }
	    }
	}
	for(int i=0;i<numberOfColumns;i++) cout<<cubes[i]<<" ";
	return 0;
}