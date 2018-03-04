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
long long int answer;

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}
int magic[3][3];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>magic[i][j];
    int temp=magic[1][0]+magic[2][0];
    int a1,a2,a3;
    for(int i=1;i<=100000;i++){
        int sum=temp+i;
        if(magic[0][1]+magic[2][1]<sum && magic[0][2]+magic[1][2]<sum){
            a1=i;
            a2=sum-(magic[0][1]+magic[2][1]);
            a3=sum-(magic[0][2]+magic[1][2]);
            if(a1+a2+a3==sum){
                magic[0][0]=a1;
                magic[1][1]=a2;
                magic[2][2]=a3;
                break;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<magic[i][j]<<" ";
        }
        cout<<endl;
    }
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}