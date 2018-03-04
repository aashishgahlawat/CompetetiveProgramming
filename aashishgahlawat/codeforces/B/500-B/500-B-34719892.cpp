#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
#define INF -6e12
#define foriter(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
using namespace std;

int n,k,temp;
int permute[301];
priority_queue<int,std::vector<int> ,greater<int>> inPQ[301];
int group[301];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    //initialisation
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>permute[i]; }

    for(int i=1;i<=n;i++){ 
        group[i]=i;
        inPQ[i].push(i);
    }
    //initialisation ends
    string initString;
    for(int i=0;i<n;i++){
        cin>>initString;
        for(int j=0;j<n;j++){
            if(initString[j]=='1'){
                int p=permute[i],q=permute[j];
                int gp=group[p],gq=group[q];
                // to avoid infinite loop
                if(gp==gq) continue;

                if( (p<q && gq>gp) || (q<p && gq>gp) ){
                    while(!inPQ[gq].empty()){
                        k=inPQ[gq].top();
                        inPQ[gp].push(k);
                        inPQ[gq].pop();
                        group[k]=gp;
                    } 
                }else{
                    while(!inPQ[gp].empty()){
                        k=inPQ[gp].top();
                        inPQ[gq].push(k);
                        inPQ[gp].pop();
                        group[k]=gq;
                    }
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        temp=group[permute[i]];
        cout<<inPQ[temp].top()<<" ";   
        inPQ[temp].pop();
    }


    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}