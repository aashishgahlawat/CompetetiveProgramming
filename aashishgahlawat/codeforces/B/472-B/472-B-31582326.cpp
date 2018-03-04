#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int timeInSec;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int peopleCount;
	int capacity;
	cin>>peopleCount>>capacity;
	int people[peopleCount];
	for(int i=0;i<peopleCount;i++){
	    cin>>people[i];
	}
	int z=sizeof(people)/sizeof(people[0]);
	sort(people,people+z,greater <int>());
	for(int i=0;i<peopleCount;i+=capacity){
	    timeInSec=timeInSec+((people[i]-1)*2);
	}
	cout<<timeInSec;
	return 0;
}