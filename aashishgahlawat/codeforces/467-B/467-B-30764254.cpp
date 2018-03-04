#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int typesOfSoldiers;
	cin>>typesOfSoldiers;
	int Members;
	cin>>Members;
	int bitsDifferenceConstrain;
	cin>>bitsDifferenceConstrain;
	int MembersArray[Members+1];    //+1 for fedro
	for(int i=0;i<=Members;i++){
	    cin>>MembersArray[i];
	}
	int fedro=MembersArray[Members];
	//represent in bits i.e. divide by 2, >>1 and store remainder.
	int fedroBitRepresentation[typesOfSoldiers];
	for(int i=typesOfSoldiers-1;i>=0;i--){
	    fedroBitRepresentation[i]=fedro%2;
	    fedro=fedro>>1;     //fedro/=2;
	    //no need of while fedro<=0 condition as 0/2 =0 and will fill rest with zeros.
	}
	//for(int i=0;i<typesOfSoldiers;i++){
	  //  cout<<fedroBitRepresentation[i];
	//}
	
	int friendsCount=0;
	int bitDifference=0;
	int temp[typesOfSoldiers];
	for(int i=0;i<Members;i++){     //and not = as excluding fedro
	    bitDifference=0;
	    for(int j=typesOfSoldiers-1;j>=0;j--){
	        temp[j]=MembersArray[i]%2;
	        MembersArray[i]=MembersArray[i]>>1;
	    }
	    
	    for(int k=0;k<typesOfSoldiers;k++){
	        if(fedroBitRepresentation[k]!=temp[k]){
	            bitDifference++;
	        }
	        
	        if(bitDifference>bitsDifferenceConstrain){break;}
	    }
	    if(bitDifference<=bitsDifferenceConstrain) friendsCount++;
	}
	cout<<friendsCount;
	return 0;
}