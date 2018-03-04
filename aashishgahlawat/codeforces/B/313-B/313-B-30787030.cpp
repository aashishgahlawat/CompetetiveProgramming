#include <iostream>
#define endl '\n'
using namespace std;
int dp[1000000];
string s;
int sLength;
int numberOfqueries;
int main() {
    ios_base::sync_with_stdio(false);
	// your code goes here
	cin>>s;
	sLength=s.length();
	for(int i=1;i<sLength;i++){
	    if(s[i]==s[i-1]){dp[i+1]=dp[i]+1;}else dp[i+1]=dp[i];//keeping track of connections
	}
	cin>>numberOfqueries;
	int left,right;
	while(numberOfqueries--){
	    cin>>left>>right;
	    cout<<dp[right]-dp[left]<<endl;
	}
	return 0;
}