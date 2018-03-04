#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int numberOfStudents;
	int times_each_team_to_participate;
	int participatingTeams=0;
	cin>>numberOfStudents>>times_each_team_to_participate;
	int participants[numberOfStudents];
	for(int i=0;i<numberOfStudents;i++){
	    cin>>participants[i];
	    participants[i]+=times_each_team_to_participate;
	}
	//sort the list for greedy algorithm
	int n=sizeof(participants)/sizeof(participants[0]);
	sort(participants,participants+n);      //sort from to
	
	
	for(int i=0;i<numberOfStudents;i+=3){
	    if(participants[i]<6 && participants[i+1]<6 & participants[i+2]<6){
	        participatingTeams++;
	    }
	}
	cout<<participatingTeams;
	return 0;
}