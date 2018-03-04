#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
#define foriter(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
using namespace std;


bool isPrime(int number);
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    //ios_base::sync_with_stdio(false);
    //ios::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);
    // aashish gahlawat
    string divides;
    int nDivides=0;
    for(int divideBy=2;divideBy<=50 && nDivides<2;divideBy++){
        if(isPrime(divideBy)){
            cout<<divideBy<<endl;
            fflush(stdout);
            cin>>divides;
            if(divides=="yes"){
                nDivides++;
                if(divideBy*divideBy<=100){
                    cout<<divideBy*divideBy<<endl;
                    fflush(stdout);
                    cin>>divides;
                    if(divides=="yes"){
                        nDivides++;
                    }
                }
            }
        }
        if(nDivides>1) break;
    }
    puts(nDivides > 1 ? "composite" : "prime");
    fflush(stdout);
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}

bool isPrime(int number){
    for(int i=2;i*i<=number;i++){
        if(number%i==0) return false;
    }
    return true;
}