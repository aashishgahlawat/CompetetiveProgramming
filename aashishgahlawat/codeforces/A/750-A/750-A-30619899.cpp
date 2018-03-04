#include <iostream>
#define TOTAL_TIME 240
using namespace std;

int main() {
	// your code goes here
	int ProblemsTime[10]={5,10,15,20,25,30,35,40,45,50};
	//for(int i=0;i<10;i++) cout<<ProblemsTime[i];
	int numberOfProblems;
	int timetoLeaveBefore;
	int timetoFinishAllProblems;
	cin>>numberOfProblems>>timetoLeaveBefore;
	int time=0;
	int ProblemsSolved=0;
	timetoFinishAllProblems=TOTAL_TIME- timetoLeaveBefore;
	for(int i=0;time<=timetoFinishAllProblems;i++){
	 time+=ProblemsTime[i];
	 ProblemsSolved++;
	 if(time>timetoFinishAllProblems || i==numberOfProblems) break;
	}
	cout<<ProblemsSolved-1;
	return 0;
}