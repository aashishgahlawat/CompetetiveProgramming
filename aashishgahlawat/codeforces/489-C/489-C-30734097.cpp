#include <iostream>
using namespace std;
int startNumberSumFunction();   //each time startNumber is modified
int endNumberSumFunction();     //each time endNumber is modified
void addOne();      //only in startNumber
void subtractOne(); // only in endNumber
int startNumber[100];
int endNumber[100];
int DigitConstrain,SumConstrain;    //100,1-900,0
	
int main() {
	// your code goes here
	cin>>DigitConstrain>>SumConstrain;
	
	if(DigitConstrain==1 && SumConstrain==0){   //special case 1
	    cout<<0<<" "<<0;
	    return 0;
	}
	
	if(SumConstrain==0){    //special case 2
	    cout<<-1<<" "<<-1;
	    return 0;
	}
	
	/////////////////////////////////////////
	startNumber[0]=1;
	endNumber[0]=9;
	for(int i=1;i<DigitConstrain;i++){
	    startNumber[i]=0;
	    endNumber[i]=9;
	}
	
	//greedy algo to find min and max, without dynamic programming
	//////////////////////////////////////////////////////////////
	int startSum=1,endSum=9*DigitConstrain; //will reset startSum=1 later for back greedy
	int smallestNumber[DigitConstrain];
	int largestNumber[DigitConstrain];
	smallestNumber[0]=0;
	largestNumber[0]=0;
	int flag=0; // to know if min exist, then for sure max exist as least it will be = min
	
	while(startSum<=endSum){
	    if(SumConstrain==startNumberSumFunction()){
	        //return startNumber as its being modifies
	        //will return it later with endNumber... so noting to be done here.
	        flag=1;     //found
	        break;
	    }else{
	        addOne();
	        startSum++; // no need to check out of bounds as while itself does so.
	    }
	}
	
	if(flag==0){        //no need to check for max as if min dont exist max dont as well
	    cout<<-1<<" "<<-1;
	    return 0;
	}
	
	//reset startSum
	startSum=1;
	
	while(endSum>=startSum){
	    if(SumConstrain==endNumberSumFunction()){
	        //as endNumber is being modified, we shall be returning it later
	        // though this can be same as startNumber, so we use this if to reduce further checking
	        //actually no need as from back it will be max or min=max
	        break;
	    }else{
	        subtractOne();
	        endSum--;
	    }
	}
	
	for(int i=0;i<DigitConstrain;i++){
	    cout<<startNumber[i];
	}
	cout<<" ";
	for(int i=0;i<DigitConstrain;i++){
	    cout<<endNumber[i];
	}
	
	return 0;
}
/* needs to be implemented
startNumberSumFunction()
endNumberSumFunction()
addOne()
subtractOne()
*/

int startNumberSumFunction(){
    int sum=0;
    for(int i=0;i<DigitConstrain;i++){
        sum+=startNumber[i];
    }
    return sum;
}

int endNumberSumFunction(){
    int sum=0;
    for(int i=0;i<DigitConstrain;i++){
        sum+=endNumber[i];
    }
    return sum;
}

void addOne(){      //in the startNumber
    for(int i=DigitConstrain-1;i>=0;i--){
        if(startNumber[i]<9){   //no need to check bounds, while loop of calling fn does so
            startNumber[i]+=1;
            return;
        }
    }
}

void subtractOne(){     //in the endNumber
    for(int i=DigitConstrain-1;i>=0;i--){
        if(endNumber[i]>0){
            endNumber[i]-=1;
            return;
        }
    }
}