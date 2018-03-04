#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	long long n,k;
	cin>>n>>k;
	int answer=1;
	while(k%2==0)
	{
		k/=2;
		answer++;
	}
	cout<<answer;
	return 0;
}