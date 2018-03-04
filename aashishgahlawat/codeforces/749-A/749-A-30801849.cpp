#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
bool isPrime(int number);
int Primes[1000000];
int subtractedPrimes[1000000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int number;
	cin>>number;
	int numberOfPrimes=0;
	for(int i=2;i<=number;i++){
	    if(isPrime(i)){
	        Primes[numberOfPrimes]=i;
	        numberOfPrimes++;
	    }
	}
	//for(int i=0;i<numberOfPrimes;i++){
	    //cout<<Primes[i]<<" ";
	//}
	//cout<<endl;
	//pre process work done.. now calculate max sum up of prime to number..
	int addedPrimes=0,i=0,s=0;
	while(number!=0){
	    if(number - Primes[i]!=1){
	        number-=Primes[i];
	        subtractedPrimes[s]=Primes[i];
	        s++;
	        addedPrimes++;
	    }else i++;
	}
	cout<<addedPrimes<<endl;
	for(int i=0;i<s;i++){
	    cout<<subtractedPrimes[i]<<" ";
	}
	return 0;
}
bool isPrime(int number){
    for(int x=2;x*x<=number;x++){
        if(number%x==0){
            return false;
        }
    }
    return true;
}