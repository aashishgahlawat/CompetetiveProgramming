#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int number_of_groups;
	cin>>number_of_groups;
	int number_of_1s_groups=0,number_of_2s_groups=0,number_of_3s_groups=0,number_of_4s_groups=0;
	int number_of_taxies_required=0;
	int scanned_number;
	if(number_of_groups>=1 && number_of_groups<=100000){
	    while(number_of_groups--){
	        cin>>scanned_number;
	        if(scanned_number>=1 && scanned_number<=4){
	            switch(scanned_number){
	                case 4: number_of_4s_groups++; break;
	                case 3: number_of_3s_groups++; break;
	                case 2: number_of_2s_groups++; break;
	                case 1: number_of_1s_groups++; break;
	            }
	        }
	    }
	    //4s case
	    number_of_taxies_required+=number_of_4s_groups; 
	    //3s case
	    if(number_of_3s_groups<=number_of_1s_groups){       //you cant add 3s with 2s as 3+2=5
	        number_of_taxies_required+=number_of_3s_groups;
	        number_of_1s_groups-=number_of_3s_groups;       //as 1s are yet left
	    }else {
	        number_of_taxies_required+=number_of_3s_groups;
	        number_of_1s_groups=0; //all added up with 3s as 3s are more
	    }
	    //2s case
	    if(number_of_2s_groups%2==0){
	        number_of_taxies_required+=number_of_2s_groups/2;
	    }else {     //at most 1 2s left over therefore 2 1s will add up with it
	        number_of_taxies_required+=number_of_2s_groups/2+1;
	        number_of_1s_groups-=2;
	    }
	    //1s case
	    if(number_of_1s_groups>0){
	        number_of_taxies_required+=number_of_1s_groups/4;
	        if(number_of_1s_groups%4!=0){
	            number_of_taxies_required++;
	        }
	    }
	}
	std::cout << number_of_taxies_required;
	return 0;
}