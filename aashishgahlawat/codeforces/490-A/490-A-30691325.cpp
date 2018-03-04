#include <iostream>         //cin cout
#include <algorithm>        //min
using namespace std;

int main() {
	// your code goes here
	int totalNumberOfStudents;
	cin>>totalNumberOfStudents;
	int students[totalNumberOfStudents+1];
	int programmer=0,maths=0,sports=0;
	for(int i=1;i<=totalNumberOfStudents;i++){
	    cin>>students[i];
	    if(students[i]==1) programmer++;
	    if(students[i]==2) maths++;
	    if(students[i]==3) sports++;
	}
	int maxTeams=min(min(programmer,maths),sports);
	cout<<maxTeams<<endl;
	///////////////////////////////////////////////
	int programmerIndexArray[programmer];       //1 
	int mathsIndexArray[maths];                 //2 
	int sportsIndexArray[sports];              //3 
	int p=0,m=0,s=0;
	
	for(int i=1;i<=totalNumberOfStudents;i++){       //store index in respective arrays
	    if(students[i]==1) {programmerIndexArray[p]=i; p++;
	    }else if(students[i]==2) {mathsIndexArray[m]=i; m++;
	    }else if(students[i]==3) {sportsIndexArray[s]=i; s++;}
	}
	
	
	
	/*for(int i=0;i<programmer;i++) cout<<programmerIndexArray[i];
	cout<<endl;
	for(int i=0;i<maths;i++) cout<<mathsIndexArray[i];
	cout<<endl;
	for(int i=0;i<sports;i++) cout<<sportsIndexArray[i];
	cout<<endl;*/
	
	
	
	int programmerStartIndex= programmer - maxTeams;
	int mathsStartIndex= maths - maxTeams;
	int sportsStartIndex= sports - maxTeams;
	
	for(int i=0;i<maxTeams;i++){
	    cout<<programmerIndexArray[programmerStartIndex]<<" "<<mathsIndexArray[mathsStartIndex]<<" "
	    <<sportsIndexArray[sportsStartIndex]<<endl;
	    programmerStartIndex++;
	    mathsStartIndex++;
	    sportsStartIndex++;
	}
	return 0;
}