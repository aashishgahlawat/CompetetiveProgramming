#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfSongs;//n
	int timeLimit;//d
	cin>>numberOfSongs>>timeLimit;
	
	int inbetweenJokes=((numberOfSongs-1)*10)/5;//each joke takes 5 minutes
	int remainingTimeJokes=0;
	int remainingTime=0;
	int SongsTime=0;
	int currentSongTime=0;
	for(int i=0;i<numberOfSongs;i++){
	    cin>>currentSongTime;//t
	    SongsTime+=currentSongTime;
	}
	int totalSongsTime=((numberOfSongs-1)*10)+SongsTime;
	if(totalSongsTime>timeLimit){cout<<-1; return 0;}
	remainingTime=timeLimit - totalSongsTime;
	remainingTimeJokes=remainingTime/5;
	int totalJokes=inbetweenJokes+remainingTimeJokes;
	cout<<totalJokes;
	return 0;
}