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
long long ll_int_max=999999999999;
long long int answer;

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}
bool sortbysec(const pair<int,int> &a,//sort vector by second
              const pair<int,int> &b)
{
    return (a.second < b.second);//.first > in desc first
}

std::vector<pair<int,int>> graph[100001];
int vCount,eCount;
int index=0;
int currV;
int startV=1;
int shortest=1;
int endV;//ending vertex will be last one...
long long int pathLength[100001];///vertex , path
priority_queue< pair<long long int,int>, vector <pair<long long int,int>> , greater<pair<long long int,int>> > shortest_path_queue;
bool pathStutus[100001];//holds temporary or permanent shortest path...
int Parent[100001];//predecessor
void dijkastra();
int findShortest_path_among_unvisited();
void printPath();
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>vCount>>eCount;
    endV=vCount;

    //create graph
    for(int i=0;i<eCount;i++){
        int a,b,w;
        cin>>a>>b>>w;//as w is +ve and >1, shall be using priority queue to track waiting nodes
        //what if already a shorter edge exists as multiple edges on same veritces may happen to appear
        graph[a].push_back(make_pair(b,w));//if (b==a) self-loop?
        graph[b].push_back(make_pair(a,w));
    }

    //for greedy dijkastra algo, sorting
    /*for(int i=1;i<=endV;i++){
        sort(graph[i].begin(),graph[i].end(),sortbysec);
    }*/

    //if(graph[startV].size()==0){cout<<-1; return 0;}

    fill(pathLength,pathLength+endV+1,ll_int_max);//from-to-value, all isloated with length to infinity

    //init
    Parent[startV]=-1;
    pathLength[startV]=0;//dont set it visited in advance, as there are no self-loops...

    dijkastra();

    printPath();

    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}

void dijkastra(){
    shortest_path_queue.push(make_pair(0,1));
    while(!shortest_path_queue.empty()){
    currV=findShortest_path_among_unvisited();
    if(currV==0 || currV==endV) return;// all possible traversed, either are isolated or done with all
    pathStutus[currV]=true;
    //update adjacent paths if a shorter way found and are not permanent i.e. no shorter path yet found
    for(int i=0;i<graph[currV].size();i++){
        int temp=graph[currV][i].first;//adjacents
        if(!pathStutus[temp]){//yet no shortest path found then
            if(pathLength[currV]+graph[currV][i].second<pathLength[temp]){
                //parent+child path<path of child till found by other path
                pathLength[temp]=pathLength[currV]+graph[currV][i].second;// a new shorter path found
                shortest_path_queue.push(make_pair(pathLength[temp],temp));
                Parent[temp]=currV;//new parent for shorter path
            }
        }
    }
    //dijkastra();
    }
}

int findShortest_path_among_unvisited(){
    int shortest=0;
    if(!shortest_path_queue.empty()){
        shortest=shortest_path_queue.top().second;
        shortest_path_queue.pop();
        return shortest;
    }else return 0;
    /*shortest=0;
    int i;
    //each time new initial shortest among temporary paths
    for(i=1;i<=endV;i++){
        if(!pathStutus[i] && pathLength[i]<ll_int_max){
            shortest=i;
            break;
        }
    }

    if(shortest==0){return shortest;}//if all isolated or all visited, return 0 as flag (done traversing)

    //shortest among all
    for(;i<=endV;i++){
        if(!pathStutus[i] && pathLength[i]<pathLength[shortest]){
            shortest=i;
        }
    }
    return shortest;*/
}

void printPath(){
    if(Parent[endV]==0){cout<<-1; return;}
    std::vector<int> Path;
    for(int current=endV;Parent[current]!=-1;current=Parent[current]){
        Path.push_back(current);
    }
    cout<<1<<" ";
    //reverse(Path.begin(),Path.end());
    for(int i=Path.size()-1;i>=0;i--){
        cout<<Path[i]<<" ";
    }
}