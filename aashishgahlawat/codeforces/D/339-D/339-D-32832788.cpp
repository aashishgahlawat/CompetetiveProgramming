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
int mod=1000000007;//1e9+7
long long int answer;

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}
const int myMax=(1<<18);//pow(2,18)
int aCount;
int qCount;
int a[2*myMax];//pow(2,17)//tree
int aSize;
void buildUpdate(int index,int value);
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>aCount;
    aSize=1<<aCount;
    cin>>qCount;
    int temp;
    //buildUp tree
    for(int i=0;i<aSize;i++){
        cin>>temp;
        buildUpdate(i,temp);
    }
    //update tree...
    int index,value;
    //int resetVal;
    for(int q=0;q<qCount;q++){
        cin>>index>>value;
        index--;
        //resetVal=a[index];
        buildUpdate(index,value);
        cout<<a[1]<<endl;
        //a[index]=resetVal;
    }
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}
void buildUpdate(int index,int value){
    index+=aSize;//use same array to next processed values, dispite of using a temporary one.
    a[index]=value;
    index>>=1;//divide by 2
    int amOn=0;//for even odd level operations
    while(index>0){//@ 0 will terminate hence outputs [1]
        if(amOn&1){//true for odd
            //xor operation
            a[index]=a[2*index]^a[2*index+1];
        }else {
            //bitwise or operation
            a[index]=a[2*index]|a[2*index+1];
        }
        amOn++;//alternates operations
        index>>=1;//2 merges to give half length on same a[]
    }
}