#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#include <iomanip>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int x,y;
	cin>>x>>y;
	int numberOfTaxis;
	cin>>numberOfTaxis;
	int a,b;
	double speed[numberOfTaxis];
	double time[numberOfTaxis];
	double taxiDistance[numberOfTaxis];
	for(int i=0;i<numberOfTaxis;i++){
	    cin>>a>>b;
	    taxiDistance[i]=sqrt(pow((x-a),2)+pow((y-b),2));
	    cin>>speed[i];
	    time[i]=taxiDistance[i]/speed[i];
	}
	double min=time[0];
	for(int i=1;i<numberOfTaxis;i++){
	    if(time[i]<min) min=time[i];
	}
	cout<<fixed;
	cout<<setprecision(20);
	cout<<min;
	return 0;
}