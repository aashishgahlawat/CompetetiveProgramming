#include <iostream>
using namespace std;
bool evaluate(int number);
bool permutation(int with, int number);     //dept first search
int main() {
	// your code goes here
	int number;
	cin>>number;
	if(evaluate(number)){cout<<"YES";
	}else cout<<"NO";
	return 0;
}

bool evaluate(int number){
    if(permutation(4,number)) return true;
    if(permutation(7,number)) return true;
    return false;
}

bool permutation(int with,int number){   //no need to condition to be like less than number, line 23, 24 ensure that
    if(with>number) return false;       //a smaller number cant be divisible
    if(number%with==0) return true;     //divisible of 4 or 7 base case or permutation of 4 & 7 recursively
    if(permutation(with*10+4,number)) return true;
    if(permutation(with*10+7,number)) return true;
    return false;
}