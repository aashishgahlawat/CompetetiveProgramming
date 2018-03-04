#include <iostream>
#include<algorithm> // to be able to use max function
#include<cstring>
using namespace std;
int n,a,b,c;  //permissible length[s] of ribon after cut,
int arrayForMemorization[4001];     //1 to 4000-constrain therefore +1 i.e. 4001 as index start form 0.
//take a copy pen and go line by line to understand code... make a arrayForMemorization of size 10 and work on 5,5,3,2 input
int main() {
	// your code goes here  
	cin>>n>>a>>b>>c;
	/*arrayForMemorization gives 1st index i.e. 0th in memory (can be for example 10023)
	fill(from startMemoryAddress, to endMemoryAddress,value) value = -1*(10^9)
	i.e. initialize arrayForMemorization with -ve infinity or INT_MIN
	*/
	fill(arrayForMemorization+1,arrayForMemorization+4001,-1e9);
	for(int i=1;i<=n;i++){
	    if(i>=a)
	        arrayForMemorization[i]=max(arrayForMemorization[i],arrayForMemorization[i-a]+1);   //if cut possible then previous cuts +1
	    if(i>=b)
	        arrayForMemorization[i]=max(arrayForMemorization[i],arrayForMemorization[i-b]+1);//i-b to look up in arrayForMemorization if was greater, if not thats why taken as -1e9 and not -1
	    if(i>=c)
	        arrayForMemorization[i]=max(arrayForMemorization[i],arrayForMemorization[i-c]+1);
	}
	cout<<arrayForMemorization[n];  //as using top down aproach, therefore last indexed array will give optimal solution
	return 0;
}