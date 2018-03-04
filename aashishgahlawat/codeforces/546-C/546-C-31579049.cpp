#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	//total number of cards
	int totalCards;
	cin>>totalCards;
	std::queue<int> firstPlayer ;
	std::queue<int> secondPlayer ;
	int p1CCount;
	cin>>p1CCount;
	int temp;
	for(int i=0;i<p1CCount;i++){
	    cin>>temp;
	    firstPlayer.push(temp);
	}
	int p2CCount;
	cin>>p2CCount;
	for(int i=0;i<p2CCount;i++){
	    cin>>temp;
	    secondPlayer.push(temp);
	}
	int firstElement,secondElement;
	int count=0;
	while(!(firstPlayer.empty()) && !(secondPlayer.empty())){//&& and not ||
	    firstElement=firstPlayer.front();
	    secondElement=secondPlayer.front();
	    firstPlayer.pop();
	    secondPlayer.pop();
	    if(firstElement>secondElement){
	        firstPlayer.push(secondElement);
	        firstPlayer.push(firstElement);
	    }else {
	        secondPlayer.push(firstElement);
	        secondPlayer.push(secondElement);
	    }
	    count++;
	    if(count==1000) break;
	}
	if(count==1000) {cout<<-1; return 0;}
	cout<<count<<" ";
	if(!(firstPlayer.empty())) cout<<1;
	else cout<<2;
	return 0;
}