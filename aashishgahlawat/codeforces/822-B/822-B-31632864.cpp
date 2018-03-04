#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
string s,t;
int n,m;
int charsEqual (int start){//O(n sq.) <=1000 constrain...
    int current = 0;//can use s[j] j++...
    for (int i = start; i < start + n; i++){
        if (s[i - start] == t[i]) current++;
    }
    return current;
}

int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
    cin >> n >> m >> s>> t;
    int temp;
    int maxeq = 0, maxat = 0;//max equal found and at what position....if 0.. start with 0 till length
    for (int i = 0; i <= m - n; i++){
        temp=charsEqual(i);
       if (temp > maxeq){
           maxeq = temp;
           maxat = i;//index from
       }
       if(temp==n) break;
    }
    
    cout << n - maxeq;
    if((n- maxeq)==0) return 0;
    cout<<endl;
    for (int i = maxat; i < maxat + n; i++){
        if (s[i - maxat] != t[i]) cout << i - maxat + 1 << ' ';
    }
	return 0;
}