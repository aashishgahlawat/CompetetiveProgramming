#include<bits/stdc++.h>
using namespace std;
/*--------------------------------------------------------------*/
typedef long long ll;
typedef vector<ll> vec;
/*--------------------------------------------------------------*/
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
/*--------------------------------------------------------------*/
//Function to add an edge for graph
//Undirected graph
vec adj[101];
void add_edge(ll a,ll b)
{
    adj[a].pb(b);
    adj[b].pb(a);
}

bool visited[101]={false};
void dfs(ll x)
{
    visited[x]=true;
    for(ll i=0;i<adj[x].size();i++)
    {
        if(visited[adj[x][i]]==false)
            dfs(adj[x][i]);
    }
}
int main()
{
    fastread;
    ll n,m;
    cin>>n>>m;
    vec lang[101];
    ll i;
    ll coun=0;
    for(int i=0;i<n;i++)
    {
        ll x,j,val;
        cin>>x;
        if(x==0)
        {
            coun++;//need to learn least one lang
        }
        for(int j=0;j<x;j++)
        {
            cin>>val;
            ll k;
            for(int k=0;k<lang[val].size();k++)
            {
                add_edge(i+1,lang[val][k]);//current person and at lang index to till all , the all become adj
            }
            lang[val].pb(i+1);//lang known by..i=0 , so i+1 for 1st 2nd etc person
        }
    }
    if(coun==n)
        cout<<coun<<endl;// all zeros, i.e. all need to learn least one each i.e. = n of person or = coun=(n)
    else
    {
        coun=0;
    for(int i=1;i<=n;i++)// traverse all person
    {
        if(visited[i]==false)//if unvisited by a language
        {
            dfs(i);
            coun++;
        }
    }
    cout<<coun-1<<endl;// initially all unvisited so counter=1 least , so if by first can visit all, -1 for 0
    }
    return 0;
}