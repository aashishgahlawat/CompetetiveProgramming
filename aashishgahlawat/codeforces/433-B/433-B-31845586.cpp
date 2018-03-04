#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
//

void unsortedSum(int start,int end){
    
}

//
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int numOfElem;
	cin>>numOfElem;
	long long int sumListUnsorted[numOfElem+1];
    long long int sumListSorted[numOfElem+1];
    
    sumListSorted[0]=0;
    sumListUnsorted[0]=0;
    
	for(int i=1;i<=numOfElem;i++){
	    cin>>sumListSorted[i];//suppose is sorted
	    sumListUnsorted[i]=sumListUnsorted[i-1]+sumListSorted[i];
	}
	long long int z=sizeof(sumListSorted)/sizeof(sumListSorted[0]);
	sort(sumListSorted,sumListSorted+z);
	for(int i=1;i<=numOfElem;i++) sumListSorted[i]=sumListSorted[i-1]+sumListSorted[i];
	int numOfTests;
	cin>>numOfTests;
	int caseQuestion;
	int start,end;
	while(numOfTests--){
	    cin>>caseQuestion>>start>>end;
	    if(caseQuestion==1) {
	        //do this if unsorted
	        cout<<sumListUnsorted[end]- sumListUnsorted[start-1];
	        cout<<endl;
	    }
	    else {
	        //do this if sorted
	        cout<<sumListSorted[end]- sumListSorted[start-1];
	        cout<<endl;
	    }
	}
	return 0;
}