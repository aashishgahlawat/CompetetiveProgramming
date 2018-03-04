#include <iostream>
using namespace std;
int digitsArray[100];
int numberOfDigits;
void reset(int i,int j);
int flip(int i, int j); //returns ones in digitsArray.
int main() {
	// your code goes here
	cin>>numberOfDigits;
	int initialOnes=0;
	for(int i=0;i<numberOfDigits;i++){
	    cin>>digitsArray[i];
	    if(digitsArray[i]==1) initialOnes++;
	}
	int currentOnescount=0;
	int maxOnescount=0;
	for(int i=0;i<numberOfDigits;i++){
	    for(int j=numberOfDigits-1;j>=i;j--){
	        currentOnescount=flip(i,j);
	        if(currentOnescount>maxOnescount) maxOnescount=currentOnescount;    //memorization
	    }
	}
	cout<<maxOnescount;
	return 0;
}

int flip(int i,int j){
    int ii=i,jj=j;
    int Ones=0;
    while(i<=j){
        if(digitsArray[i]==0) {digitsArray[i]=1;
        }else digitsArray[i]=0;
        i++;
    }
    for(int i=0;i<numberOfDigits;i++){  //count ones via brute force
        if(digitsArray[i]==1) Ones++;
    }
    while(ii<=jj){ //reset array
        if(digitsArray[ii]==0) {digitsArray[ii]=1;
        }else digitsArray[ii]=0;
        ii++;
    }
    return Ones;
}