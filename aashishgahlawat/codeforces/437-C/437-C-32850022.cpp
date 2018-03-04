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
int parts,ropes;
int energy[1001];
std::vector<pair<int, int>> graph;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>parts>>ropes;
    for(int i=0;i<parts;i++) cin>>energy[i];
    int fir,sec;
    for(int i=0;i<ropes;i++){
        cin>>fir>>sec;
        fir--;
        sec--;
        graph.pb(mp(fir,sec));
    }
    sort(graph.begin(),graph.end());
    for(int i=0;i<ropes;i++){
        answer+=min(energy[graph[i].first],energy[graph[i].second]);
    }
    cout<<answer;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}