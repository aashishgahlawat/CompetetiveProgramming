#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
int maxTeams=0;
void calculate(int x,int y);
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int experiencedCount,newBieCount;
	cin>>experiencedCount>>newBieCount;
	int max=experiencedCount;
	int min=newBieCount;
	if(newBieCount>max) {max=newBieCount; min=experiencedCount;}
	calculate(max,min);
	cout<<maxTeams;
	return 0;
}
void calculate(int x,int y){
    if(x>=2 && y>=1){
        maxTeams++;
        x-=2;
        y-=1;
        if(x>=y){
            calculate(x,y);
        }else if(y>x) calculate(y,x);
    }
}