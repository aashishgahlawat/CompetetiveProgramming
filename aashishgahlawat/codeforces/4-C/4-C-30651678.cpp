#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int numberOfInputs;
	cin>>numberOfInputs;
	string inputString;
	int count;
	std::map<string, int> myMap;        //string key int value , default 0
	for(int i=0;i<numberOfInputs;i++){
	    cin>>inputString;
	    //passing key to myMap & returns value, using post fix ,increments after insertion, if doesnt exist inserts it
	    count=myMap[inputString]++;
	    if(count==0) {cout<<"OK"<<endl;}
	    else{cout<<inputString<<count<<endl;}
	}
	return 0;
}