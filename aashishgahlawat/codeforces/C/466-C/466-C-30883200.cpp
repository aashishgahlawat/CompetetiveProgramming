#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int numberOfValues;
	cin>>numberOfValues;
	int Values[numberOfValues];
	long long int sum=0;
	for(int i=0; i<numberOfValues;i++){
	    cin>>Values[i];
	    sum+=Values[i];
	}
	if(sum%3!=0){
	    cout<<0;
	    return 0;
	}
	//if 1 to i sum=s/3 therefore j to n also s/3
	int cnt[numberOfValues];
	sum/=3;
	long long int subSum=0;
	for(int i=numberOfValues-1;i>=0;i--){
	    subSum+=Values[i];
	    if(subSum==sum){
	        cnt[i]=1;
	    }else cnt[i]=0;
	}
	for(int i=numberOfValues-2;i>=0;i--){
	    cnt[i]+=cnt[i+1];//sum -2 as +1
	}
	long long ans = 0;
        subSum = 0;
        for(int i = 0 ; i+2 < numberOfValues ; ++i) {
            subSum += Values[i];
            if (subSum == sum)
                ans += cnt[i+2];
        }
        cout << ans << "\n";
	return 0;
}