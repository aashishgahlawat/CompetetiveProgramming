#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numbersCount;
	int testsCount;
	cin>>numbersCount>>testsCount;
	int numbers[numbersCount];
	for(int i=0;i<numbersCount;i++){
	    cin>>numbers[i];
	}
	int tests[testsCount];
	for(int i=0;i<testsCount;i++){
	    cin>>tests[i];
	}
	int DynamicProgrammingMemorization[100002];
	std::map<int, bool> myMap ;
	fill(DynamicProgrammingMemorization,DynamicProgrammingMemorization+100002,0);
	for(int i=numbersCount-1;i>=0;i--){
	    if(!myMap[numbers[i]]){
	        DynamicProgrammingMemorization[i]=DynamicProgrammingMemorization[i+1]+1;
	        myMap[numbers[i]]=true;
	    }else {
	        DynamicProgrammingMemorization[i]=DynamicProgrammingMemorization[i+1];
	    }
	}
	for(int i=1;i<=testsCount;i++){
	    cout<<DynamicProgrammingMemorization[tests[i-1]-1]<<endl;
	}
	return 0;
}