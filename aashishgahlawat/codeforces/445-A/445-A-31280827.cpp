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
	char gb[row][column];
	for(int i=0;i<row;i++){
	    for(int j=0;j<column;j++){
	        cin>>gb[i][j];
	        if(gb[i][j]=='.'){ 
	            if ((i + j) & 1)	gb[i][j] = 'W';
				else	gb[i][j] = 'B';
	        }
	        cout<<gb[i][j];
	    }
	    cout<<endl;
	}
	return 0;
}