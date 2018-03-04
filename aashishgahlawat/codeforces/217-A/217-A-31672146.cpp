#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
std::vector<int> adjacent[500] ;
int visited[500];
void dfs(int i){
    if(visited[i]) return;
    visited[i]=1;
    for(int z=0;z<adjacent[i].size();z++){
        //adjacent[i].size() till all its adjacent that were same make them all visited...
        //i.e. same are visitable
        dfs(adjacent[i][z]);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int total;
	cin>>total;
	int answer=-1;//or at cout<<answer-1;
	int x_co[total];
	int y_co[total];
	for(int i=0;i<total;i++){
	    cin>>x_co[i]>>y_co[i];
	    for(int j=0;j<i;j++){
	    //see if any if same and reachable.....
	    //make its adjacent all equal and via dfs traverse all
	        if(x_co[i]==x_co[j] || y_co[i]==y_co[j]) adjacent[i].push_back(j), adjacent[j].push_back(i);
	        //define which index drift are adjacent i.e. reachable... reaching one make them all reachable
	        //i=j and j=i vice versa
	    }
	}
	for(int i=0;i<total;i++){
	    if(!visited[i]){//if not visited... visit it... for first answer=0 and then its dfs....
	        answer++, dfs(i);
	    }
	}
	cout<<answer;
	return 0;
}