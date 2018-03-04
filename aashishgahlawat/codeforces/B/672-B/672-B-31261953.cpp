#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	string inputString;
	int len;
	cin>>len>>inputString;
	if(len>26) {cout<<-1; return 0;}
	bool alphabets[26];
	memset(alphabets,false,26);
	int count=0;
	for(int i=0;i<len;i++){
	 if(alphabets[inputString[i]-97]==true){
	     count++;
	 }else {
	     alphabets[inputString[i]-97]=true;
	 }
	}
	cout<<count;
	return 0;
}