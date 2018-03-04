#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int numberof_Piles;
	cin>>numberof_Piles;
	int piles[numberof_Piles];
	for(int i=0;i<numberof_Piles;i++){
	    cin>>piles[i];
	}
	for(int i=1;i<numberof_Piles;i++) piles[i]+=piles[i-1];
	int numberof_juicyWorms;
	int juicyWorm;
	cin>>numberof_juicyWorms;
	while(numberof_juicyWorms--){
	    cin>>juicyWorm;
	    int start=0,end=numberof_Piles-1;
	    while(start<end){
	        int mid=(start+end)/2;
	        if(piles[mid]<juicyWorm){start=mid+1;}else end=mid;
	    }
	    cout<<start+1<<endl;
	}
	return 0;
}