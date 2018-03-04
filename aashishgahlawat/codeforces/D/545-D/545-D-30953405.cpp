#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,t=0,ans=0;
    cin>>n;
    vector <int> v;
    for (i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x); 
    }       
    sort(v.begin(), v.end());
    for (i=0;i<v.size();i++)
    {
        if (v[i]>=t)
        {
            ans++;
            t+=v[i]; 
        }
    }
    cout<<ans<<endl; 
    return 0; 
}