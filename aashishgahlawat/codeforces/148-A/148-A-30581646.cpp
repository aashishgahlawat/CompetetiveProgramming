#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int everyKthPunched;        // 1....k,l,m,n.....10
	int everyLthTailed;         // 1....d...10^5
	int everyMthFeeted;
	int everyNthThreatened;
	int totalNumberOfDragonsD;
	int numberOfDragonsHurted;
	cin>>everyKthPunched>>everyLthTailed>>everyMthFeeted>>everyNthThreatened>>totalNumberOfDragonsD;
	if(everyKthPunched==1 || everyLthTailed==1 || everyMthFeeted==1 || everyNthThreatened==1){
	    numberOfDragonsHurted=totalNumberOfDragonsD;
	    cout<<numberOfDragonsHurted;
	}else {
	int dragonsArray[totalNumberOfDragonsD];
	for(int i=0;i<=totalNumberOfDragonsD;i++){
	    dragonsArray[i]=0;
	}
	for(int i=everyKthPunched-1;i<totalNumberOfDragonsD;i+=everyKthPunched){
	    dragonsArray[i]=1;
	}
	for(int i=everyLthTailed-1;i<totalNumberOfDragonsD;i+=everyLthTailed){
	    dragonsArray[i]=1;
	}
	for(int i=everyMthFeeted-1;i<totalNumberOfDragonsD;i+=everyMthFeeted){
	    dragonsArray[i]=1;
	}
	for(int i=everyNthThreatened-1;i<totalNumberOfDragonsD;i+=everyNthThreatened){
	    dragonsArray[i]=1;
	}
	int counter=0;
	for(int i=0;i<totalNumberOfDragonsD;i++){
	    if(dragonsArray[i]==1) counter++;
	}
	cout<<counter;}
	return 0;
}