#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	long long int digits,answer=0;
	cin>>digits;
	for(int i=1;i<=digits;i++){
	    answer+=pow(2,i);
	}
	cout<<answer;
	return 0;
}