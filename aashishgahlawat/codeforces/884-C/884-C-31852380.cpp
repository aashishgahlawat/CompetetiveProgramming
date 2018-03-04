#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
bool visited[100005];
int stations_i_dest[100005];
vector<int> dp;// path length of each individual
int dfs(int i,int j);
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int numOfStations;
	cin>>numOfStations;
	for(int i=1;i<=numOfStations;i++){
	    cin>>stations_i_dest[i];
	}
	//change<=2;
	
	for(int i=1;i<=numOfStations;i++){
	    //memset(visited,false,100005);
	    if(visited[i]) continue;
	    dp.push_back(dfs(i,0));
	}
	if(dp.size() == 1){
        cout << numOfStations*1LL*numOfStations;//1LL to output 64bit int i.e. long long int
        return 0;
    }
    
    sort(dp.begin(),dp.end());
    //for(int i=0;i<dp.size();i++) cout<<dp[i]<<" ";
    //cout<<endl;
	long long int visitable=0;
	int dpSize=dp.size();
	visitable=dp[dpSize-1]+dp[dpSize-2];
	visitable*=visitable;
	for(int i=0;i<dpSize-2;i++){
	    visitable+=(dp[i]*dp[i]*1LL);
	}
	cout<<visitable;
	return 0;
}
int dfs(int start,int yetVisited){
    if(visited[start]) return yetVisited;
    visited[start]=true;
    yetVisited++;
    start=stations_i_dest[start];
    dfs(start,yetVisited);
}