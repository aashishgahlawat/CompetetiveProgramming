#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfCells;
	int flag;
	int CellNumberToReach;
	cin>>numberOfCells>>CellNumberToReach;
	int cells[numberOfCells+1];
	for(int i=1;i<=numberOfCells;i++) cin>>cells[i];
	        for(int i=1;i<=numberOfCells;){
	                if(i>CellNumberToReach){flag=0; break;}
	                if(i==CellNumberToReach){flag=1; break;}
	                i+=cells[i];
	        }
	        if(flag){ cout<<"YES";}else cout<<"NO";
	return 0;
}