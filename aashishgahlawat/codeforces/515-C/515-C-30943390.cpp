#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	//more positive digits means more value
	//primes cant be factoriesed as 2 3 5 7
	// factoriese 4 6 8 9 to till primes to maximize digits as prime further cant be factorized
	/* 9!?=?9?×?8?×?7!. Since 7 is a prime, 7! cannot be divided to more factorials.
	However, it's easy to see 9?×?8?=?(3?×?2)?×?(3?×?2)?×?2?=?(3!)pow->2?×?(2!), 
	so 9 should be transformed to 7332.
	*/
	int numberLength;
	long long int number;
	cin>>numberLength>>number;
	int numArray[numberLength];
	//int zeroOneCount=0;
	for(int i=0;i<numberLength;i++){
	    numArray[i]=number%10;
	    //cout<<numArray[i];
	    //if(numArray[i]==0 || numArray[i]==1) zeroOneCount++;
	    number/=10;
	}
	//cout<<endl;
	int n=sizeof(numArray)/sizeof(numArray[0]);
	sort(numArray,numArray+n,greater<int>());
	//numberLength-=zeroOneCount;
	string s="";
	for(int i=0;i<numberLength;i++){
	    switch(numArray[i]){
	        case 0: 
	        case 1: s+=""; break;
	        case 2: s+="2"; break;
	        case 3: s+="3"; break;
	        case 4: s+="322"; break;
	        case 5: s+="5"; break;
	        case 6: s+="53"; break;
	        case 7: s+="7"; break;
	        case 8: s+="7222"; break;
	        case 9: s+="7332"; break;
	        default: s+="";
	    }
	}
	//cout<<s<<endl;
	char temp;
	int sLength=s.length();
	//cout<<sLength<<endl;
	for(int i=0;i<sLength;i++){
	    for(int j=0;j<sLength;j++){
	        if(s[j+1]>s[j]){
	            temp=s[j+1];
	            s[j+1]=s[j];
	            s[j]=temp;
	        }
	    }
	}
	cout<<s;
	
	return 0;
}