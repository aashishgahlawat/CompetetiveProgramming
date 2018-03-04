#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define N 1000000
using namespace std;
int cats[N];
bool visited[N];
std::vector<int> treeAdj[N] ;
int NCount,catConstrain,MaxRestaurants=0;
void dfs(int nodeNow,int catsPrevious);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	cin>>NCount>>catConstrain;
	memset(visited,true,sizeof(visited));//let all be processed so dont process them any more...
	memset(visited+1,false,NCount);//let 1 to NCount be false so process them...
	for(int i=1;i<=NCount;i++){
	    cin>>cats[i];
	}
	int x,y;
	for(int i=1;i<=NCount-1;i++){
	    cin>>x>>y;
	    treeAdj[x].push_back(y);
	    treeAdj[y].push_back(x);
	}
	dfs(1,0);//1 is initial root, 0 as no adjacent cat yet in past...
	cout<<MaxRestaurants;
	return 0;
}
void dfs(int nodeNow,int catsPrevious){
    int currAdjCats;
    if(cats[nodeNow]==1){
        currAdjCats=catsPrevious+1;//1 signifies a cat
    }else {
        catsPrevious=0;//reset as we need to check only adj and not total...
        //though wont matter as we'll be passing currAdjCats
        currAdjCats=0;
    }
    if(currAdjCats<=catConstrain){//if within limits
        visited[nodeNow]=true;//dont process it again.. though we have tree so no cycle possibility.
        int adjcacentNodesYet=0;
        for(int node:treeAdj[nodeNow]){//tracerse all adjacents
            if(!visited[node]){
                dfs(node,currAdjCats);
                adjcacentNodesYet++;
            }
        }
        if(adjcacentNodesYet==0){
            //nothing left reached last node i.e. leaf node
            MaxRestaurants++;
        }
    }//else return back(void return type...)
}