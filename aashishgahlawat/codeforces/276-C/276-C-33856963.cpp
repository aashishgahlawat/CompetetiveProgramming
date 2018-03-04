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
int nodes[200001];
int freq[200001];//frequency count
int b[200001];
int nCount,qCount;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>nCount>>qCount;
    for(int i=0;i<nCount;i++){cin>>nodes[i];}
    //int z=sizeof(nodes)/sizeof(nodes[0]);
    sort(nodes,nodes+nCount);
    for(int i=0;i<qCount;i++){
        int l,r;
        cin>>l>>r;
        l--;//as array index start from 0
        r--;
        freq[l]++;
        if(r<nCount-1) freq[r+1]--;
    }
    int curSum=0;
    for(int i=0;i<nCount;i++){
        curSum+=freq[i];
        b[i]=curSum;
    }
    sort(b,b+nCount);

    for(int i=0;i<nCount;i++){
        answer+=nodes[i]*1LL*b[i];
    }
    cout<<answer;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}