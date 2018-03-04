#include <iostream>
#include <bits/stdc++.h>    //sort
using namespace std;

int main() {
	// your code goes here
	int sizeConstrain;
	cin>>sizeConstrain;
	if(sizeConstrain==0){
	    cout<<0;
	    return 0;
	}
	int year[12];
	for(int i=0;i<12;i++){
	    cin>>year[i];
	}
	///sort std::list<T> ;
	int n=sizeof(year)/sizeof(year[0]);
	sort(year,year+n,greater<int>());//from to ,descending order
	//for(int i=0;i<12;i++) cout<<year[i]<<" "; cout<<endl;
	int sum=0;
	int count=0;
	int flag=0;
	for(int i=0;i<12;i++){
	    sum+=year[i];
	    count++;
	    if(sum>=sizeConstrain){
	        flag=1;
	        break;
	    }
	}
	if(flag==1){
	    cout<<count;
	}else cout<<-1;
	return 0;
}