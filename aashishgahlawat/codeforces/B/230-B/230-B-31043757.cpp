#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n){
    int a=sqrt(n);
    for(int i=2; i<=a; i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){
    long long int n;
    cin >> n;
    long long int a, sr;
    while(n--){
        cin >> a;
        if(a<4){
            cout <<"NO" << endl;
            continue;
        }
        sr = sqrt(a);
        if(sr*sr==a && isPrime(sr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}