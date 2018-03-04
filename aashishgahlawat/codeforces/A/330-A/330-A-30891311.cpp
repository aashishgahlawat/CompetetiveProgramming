#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int row,column;
	cin>>row>>column;
	int Cake[row][column];
	string EvilString;
	for(int i=0;i<row;i++){
	    cin>>EvilString;
	    for(int j=0;j<column;j++){
	        if(EvilString[j]=='.'){
	            Cake[i][j]=0;
	        }else if(EvilString[j]='S'){
	            Cake[i][j]=1;
	        }
	    }
	}
	int totalEatables=0;
	int currentEatable=0;
	for(int i=0;i<row;i++){
	    for(int j=0;j<column;j++){
	        if(Cake[i][j]==0){
	            currentEatable++;
	        }
	    }
	    if(currentEatable==column){
	        totalEatables+=column;
	    }
	    currentEatable=0;
	}
	int totalRowsEaten=totalEatables/column;
	currentEatable=0;
	//cout<<totalEatables<<" "<<totalRowsEaten<<endl;
	for(int i=0;i<column;i++){
	    for(int j=0;j<row;j++){
	        if(Cake[j][i]==0){
	            currentEatable++;
	        }
	    }
	    if(currentEatable==row){
	        totalEatables+=row- totalRowsEaten;
	    }
	    currentEatable=0;
	}
	cout<<totalEatables;
	return 0;
}//