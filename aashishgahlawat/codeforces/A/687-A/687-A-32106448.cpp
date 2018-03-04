/*
DDDD        EEEEE       EEEEE       PPPPP       I       K  K            A
D  DD       E           E           P   P       I       K K            A A
D   D       EEEEE       EEEEE       PPPPP       I       KK            AAAAA
D   D       E           E           P           I       K K          A     A
DDDDD       EEEEE       EEEEE       P           I       K  K        A       A
*/

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
bool visited[100001];// 0 by default, hence false being global
std::vector<int> adj[100001];
int EdgeMark[100001];//1 signifies parent 2 signify chile else 1, for childs children.
std::vector<pair<int,int>> Edges;
void dfs(int i);
int main() {
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	//mark parent with one and chile with 2, else if not child then 1...
	// with mark 1 goes to one set and 2 in other...only if mark u!=v for uv else -1
	//taking any node go dfs
	int vertexCount,edgesCount;
	cin>>vertexCount>>edgesCount;
	int v1,v2;
	for(int i=0;i<edgesCount;i++){
		cin>>v1>>v2;
		adj[v1].pb(v2);
		adj[v2].pb(v1);
		Edges.pb(make_pair(v1,v2));
	}

	for(int i=1;i<=vertexCount;i++){
		if(!visited[i]){
			//yet unvisited... some vertex might not be connected to any other...
			//so their adj size will be 0... and will be marked visited and dfs will imediately terminate
			//but we wont include it in parents list if size = 0.
			if(adj[i].empty()) EdgeMark[i]=-1;
			else
			EdgeMark[i]=1;//parent.. 
			dfs(i);
		}
	}
	
	for(int i=0;i<Edges.size();i++){
		if(EdgeMark[Edges[i].first]==EdgeMark[Edges[i].second]){
			cout<<-1;
			return 0;
		}
	}
	std::vector<int> firstAnswer;
	std::vector<int> secondAnswer;
	int firstCount=0,secondCount=0;
	for(int i=1;i<=vertexCount;i++){
		if(EdgeMark[i]==1){
			firstCount++;
			firstAnswer.pb(i);
		}else if(EdgeMark[i]==2){
			secondCount++;
			secondAnswer.pb(i);
		}
	}

	cout<<firstCount<<endl;
	for(int i=0;i<firstAnswer.size();i++){
		cout<<firstAnswer[i]<<" ";
	}
	cout<<endl<<secondCount<<endl;
	for(int i=0;i<secondAnswer.size();i++){
		cout<<secondAnswer[i]<<" ";
	}


	#ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
	#endif // LOCAL
	return 0;
}

void dfs(int edge){
	visited[edge]=true;
	for(int i=0;i<adj[edge].size();i++){
		if(!visited[adj[edge][i]]){
			if(EdgeMark[edge]==1)
			EdgeMark[adj[edge][i]]=2;
			else EdgeMark[adj[edge][i]]=1;
			dfs(adj[edge][i]);
		}
	}
}