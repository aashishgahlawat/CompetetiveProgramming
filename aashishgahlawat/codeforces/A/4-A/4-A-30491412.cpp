#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int weight;
	cin>>weight;
	if(weight>=1 && weight<=100){
	    if(weight>2){
	        if(weight%2==0){
	            cout<<"YES";
	        }else cout<<"NO";
	    }else std::cout <<"NO";
	}
	return 0;
}