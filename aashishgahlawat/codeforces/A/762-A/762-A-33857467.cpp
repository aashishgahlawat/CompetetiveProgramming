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
int mod=1000000007;
long long int answer=0;

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}
std::vector<long long int> divisors;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    long long int number,factNum;
    factNum--;
    cin>>number>>factNum;
    //if(factNum==1) {cout<<"1"; return 0;}
    long long int p=0,q=0;
    for(int i=1;i<sqrt(number+1);i++){
        if(number%i==0){
            if(number/i==i){//both equal
                divisors.push_back(i);
            }else {
                divisors.push_back(i);
                divisors.push_back(number/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    if(factNum>divisors.size()){cout<<"-1";} else cout<<divisors[factNum-1];
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}