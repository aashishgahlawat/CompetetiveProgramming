#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfStops;
	int in,out;
	cin>>numberOfStops;
	int numberOfIn[numberOfStops];
	int numberOfOut[numberOfStops];
	for(int i=0;i<numberOfStops;i++){
	    cin>>out>>in;
	    numberOfOut[i]=out;
	    numberOfIn[i]=in;
	}
	for(int i=1;i<numberOfStops;i++){
	    numberOfOut[i]+=numberOfOut[i-1];
	    numberOfIn[i]+=numberOfIn[i-1];
	}
	//for(int i=0;i<numberOfStops;i++){
	//    std::cout << numberOfOut[i]<<" "<<numberOfIn[i] << std::endl;
	//}
	int maximumPassangers_at_a_time=numberOfIn[0];
	for(int i=1;i<numberOfStops;i++){
	    if(numberOfIn[i] - numberOfOut[i]>maximumPassangers_at_a_time){
	        maximumPassangers_at_a_time=numberOfIn[i] - numberOfOut[i];
	    }
	}
	cout<<maximumPassangers_at_a_time;
	return 0;
}