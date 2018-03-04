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
	int enc_A_count;
	int orig_BI_count;
	cin>>enc_A_count>>orig_BI_count;
	int temp;
	long long len=0;
	for(int i=0;i<enc_A_count;i++){
	    cin>>temp;
	    len+=temp;
	}
	len+=enc_A_count-1;
	if(orig_BI_count==len) cout<<"YES";
	else cout<<"NO";
	return 0;
}