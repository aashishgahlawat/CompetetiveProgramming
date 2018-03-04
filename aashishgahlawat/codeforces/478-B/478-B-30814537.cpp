#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	//max
	long long int members,teams;
	cin>>members>>teams;
	long long max=(members-(teams-1))*(members-(teams-1)-1)/2;
	//min
	long long int divisor=members/teams;
	long long int remainder=members%teams;
	long long int min=(divisor*(divisor+1)*remainder)     +       (divisor*(divisor-1)*(teams - remainder));
	min/=2;
	cout<<min<<" "<<max;
	return 0;
}