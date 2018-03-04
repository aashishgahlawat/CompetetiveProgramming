//problem, will soon come back to it...
#include <bits/stdc++.h>

using namespace std;

#define N 101010

int n, vet[N], dp1[N], dp2[N];

int main(){
    
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &vet[i]);
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(vet[i]>vet[i-1]) dp1[i] = dp1[i-1]+1;
        //initially dp[0]=0, i.e. 1 2 3 4 5...
        else dp1[i] = 1;
        ans = max(ans, dp1[i]);//3 final
    }//>>1 1 2 1 2 3
    for(int i=n; i>0; i--){
        if(vet[i]<vet[i+1] || i==n) dp2[i] = dp2[i+1]+1;//n+1=0 init case
        else dp2[i] = 1;
    }//1 2 1 3 2 1<<
    vet[0] = -1;
    vet[n+1] = INT_MAX;
    for(int i=1; i<=n; i++){
        ans = max(ans, dp1[i-1]+1);
        ans = max(ans, dp2[i+1]+1);
        if(vet[i-1]+1 < vet[i+1]){
            ans = max(ans, dp1[i-1]+dp2[i+1]+1);
        }
    }
    printf("%d\n", ans);//5
}