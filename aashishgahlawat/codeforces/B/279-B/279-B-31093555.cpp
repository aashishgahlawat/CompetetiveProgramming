#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numberOfBooks;
	int maxTime;
	cin>>numberOfBooks>>maxTime;
	long long int books[numberOfBooks];
	for(int i=0;i<numberOfBooks;i++){
	    cin>>books[i];
	}
	long long sum=0;
	int z=0;
	int booksRead=0;
	int currentmaxRead=0;
	for(int i=0;i<numberOfBooks;i++){
	    if(sum+books[i]<=maxTime){
	        sum+=books[i];
	        currentmaxRead++;
	    }else if(sum+books[i]>maxTime){
	        sum-=books[z];//switch to next search
	        z++;
	        i--;
	        currentmaxRead--;
	        
	    }
	    booksRead=max(currentmaxRead,booksRead);
	}
	cout<<booksRead;
	return 0;
}