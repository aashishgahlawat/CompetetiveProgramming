#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numberOfNotes;
	cin>>numberOfNotes;
	int noteValue;
	while(numberOfNotes--){
	    cin>>noteValue;
	    if(noteValue==1){
	        cout<<-1;
	        return 0;
	    }
	}
	cout<<1;
	return 0;
}