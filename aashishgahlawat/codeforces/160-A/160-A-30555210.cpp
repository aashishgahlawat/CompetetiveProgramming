#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int number_of_coins;
	cin>>number_of_coins;
	int coins[number_of_coins];
	for(int i=0;i<number_of_coins;i++){
	    cin>>coins[i];
	}
	//sort list in decending oreder
	
	for(int i=0;i<number_of_coins;i++){
	    for(int j=0;j<number_of_coins;j++){
	        if(coins[j]<coins[i]){
	            int temp;
	            temp=coins[j];
	            coins[j]=coins[i];
	            coins[i]=temp;
	        }
	    }
	}
	int sum=0;
	int sum_of_left_coins=0;
	int nuberOfCoinsToHave=1;
	for(int i=0;i<number_of_coins;i++){
	    sum+=coins[i];
	    for(int j=i+1;j<number_of_coins;j++){
	        sum_of_left_coins+=coins[j];
	    }
	    if(sum<=sum_of_left_coins) {nuberOfCoinsToHave++;
	        sum_of_left_coins=0;
	    }else break;
	}
	std::cout << nuberOfCoinsToHave << std::endl;
	return 0;
}