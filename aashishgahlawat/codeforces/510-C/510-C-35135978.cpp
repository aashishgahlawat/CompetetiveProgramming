//problem, will be back
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <int, ll> pil;
template <class T> using min_queue = priority_queue<T, vector<T>, greater<T>>;

#define add(x) emplace_back(x)
#define pb(x) push_back(x)
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define fill(a, v) memset(a, v, sizeof a)

template<typename T>
inline T gcd(T a, T b)
{
    T c;
    while (b)
    {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}
const double PI = acos(-1);
const ll MOD = 1000000007;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

const int N=101;
string arr[N];
vector<int>adj[N];
int n;
vector<int>ans;
int vis[N];
void dfs(int v);
int main(){
    cout<<fixed<<setprecision(12);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=2;i<=n;i++){
        string a=arr[i-1];
        string b=arr[i];
        int j=0;
        while(j<(int)a.length()&&j<(int)b.length()&&a[j]==b[j]){
            j++;
        }
        if(j==(int)b.length()){
            cout<<"Impossible"<<endl;//b is smaller
            return 0;
        }
        if(j!=(int)a.length())adj[a[j]-'a'].add(b[j]-'a');//cape,care,cate,cale
    }
    for(int i=0;i<26;i++)dfs(i);
    while(!ans.empty())cout<<(char)(97+ans.back()),ans.pop_back();
    return 0;
}
void dfs(int v){
    if(vis[v])return;
    vis[v]=1;
    for(auto next:adj[v]){
        if(!vis[next])dfs(next);
        else if(vis[next]==1){
            cout<<"Impossible"<<endl;
            exit(0);
        }
    }
    vis[v]=2;
    ans.add(v);
}