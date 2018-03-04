#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	while(testCases--){
	    int angle;
	    int flag=0;
	    cin>>angle;
	    for(int i=3;i<=360;i++){
	        float next=((float)i - 2)*((180.0)/(float)i);
	        if(next==angle)
	        {cout<<"YES";
	            cout<<endl;
	            flag=1;
	        }
	    }
	    if(flag==0){
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}