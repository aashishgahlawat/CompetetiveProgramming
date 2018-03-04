#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfPuzzles_to_Select;
	int numberOfPuzzles_available;
	cin>>numberOfPuzzles_to_Select>>numberOfPuzzles_available;
	int puzzles[numberOfPuzzles_available];
	for(int i=0;i<numberOfPuzzles_available;i++){
	    cin>>puzzles[i];
	}
	for(int i=0;i<numberOfPuzzles_available;i++){
	    for(int j=0;j<numberOfPuzzles_available;j++){
	        if(puzzles[j]>puzzles[i]){
	            int temp=puzzles[i];
	            puzzles[i]=puzzles[j];
	            puzzles[j]=temp;
	        }
	    }
	}
	int min_diff=puzzles[numberOfPuzzles_to_Select-1] - puzzles[0];
	for(int i=0;i<=(numberOfPuzzles_available - numberOfPuzzles_to_Select);i++){
	    if(puzzles[i+numberOfPuzzles_to_Select-1] - puzzles[i]<min_diff){
	        min_diff=puzzles[i+numberOfPuzzles_to_Select-1] - puzzles[i];
	    }
	}
	cout<<min_diff;
	//for(int i=0;i<numberOfPuzzles_available;i++)cout<<puzzles[i];
	return 0;
}