// rm -rf /path/to/directory
// MinM_
//#include <iostream>
#include <Bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int MAXN = (ll) 1e5 ;
const int INF = (ll) 1e9 ;
const int MOD = (ll) 1e9 + 7 ;
const int CHR = 97 ;
#define __Sync ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define __File freopen ( "input.txt" , "r" , stdin ) ; freopen ( "output.txt" , "w" , stdout ) ;
#define pb push_back 
#define mp make_pair 
// Code
pair <int , int> prr[MAXN] ;
int main(){
    __Sync
    ll n , k , tmp , ip , sum = 0 , cnt = 0 ;
    cin >> n >> k ;
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> ip ;
        prr[i].first = ip % 10 ;
        prr[i].second = ip - prr[i].first ;
    }
    sort ( prr , prr + n ) ;
    reverse ( prr, prr + n ) ;
    for ( int i = 0 ; i < n ; i ++ ) {
        tmp = 10 - prr[i].first ;
        if ( tmp > k ) break ;
        prr[i].second += 10 ;
        k -= tmp ;
    }
    for ( int i = 0 ; i < n ; i ++ ) {
        sum += prr[i].second / 10 ;
        cnt += ( 100 - prr[i].second ) ;
    }
    cout << sum + min ( cnt / 10 , k / 10 ) ;
}