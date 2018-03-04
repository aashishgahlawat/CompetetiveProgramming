#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int numberOfParticipants;
	int participants=0;
	int constraintPlayersPosition;
	cin>>numberOfParticipants>>constraintPlayersPosition;
	if(numberOfParticipants>=1 && numberOfParticipants<=50){
	    if(constraintPlayersPosition>=1 && constraintPlayersPosition<=numberOfParticipants){
	        int playersScore[numberOfParticipants+1];
	        for(int i=1;i<(numberOfParticipants+1);i++){
	            cin>>playersScore[i];
	        }
	        for(int i=1;i<(numberOfParticipants+1);i++){
	            if(playersScore[i]>=playersScore[constraintPlayersPosition] && playersScore[i]>0){
	                participants++;
	           }
	        }
	        std::cout << participants;
	    }
	}
	return 0;
}