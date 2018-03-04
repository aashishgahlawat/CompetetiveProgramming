#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define len(a) (int)a.size()
#define all(a) (a.begin(),a.end())
#define fi first
#define sc second
#define ort(x,y) (x+y)/2
#define endl '\n'
#define FAST ios_base::sync_with_stdio(false);
#define d1(x) cerr<<#x<<":"<<x<<endl;
#define d2(x,y) cerr<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define d3(x,y,z) cerr<<#x<<":"<<x<<" "<<#y<<":"<<y<<" "<<#z<<":"<<z<<endl;
#define N (int) ()
#define inf (int) (1e7)
#define p (1000000007)
#define heap priority_queue
#define mem(a,val) memset(a,val,sizeof(a))
#define y1 asdassa
typedef long long int lli;
typedef pair<int,int> pii;
typedef pair<pair<int,int>,int> piii;
int n;
void multiply(lli F[2][2],lli M[2][2])
{
	lli R[2][2]={0};
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			for(int k=0;k<2;k++)
				R[i][j]=(R[i][j] + F[i][k] * M[k][j] %p )%p;
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			F[i][j]=R[i][j];
}
void power(lli F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    lli M[2][2] = {{0,3},{1,2}};
    power(F, n / 2);//to lower ones
    multiply(F, F);
    if (n % 2 != 0)//odd case one additional
        multiply(F, M);
}
lli solve(lli n)
{
	if(n==1) return 0;//no path
    lli F[2][2] = {{0,3},{1,2}};//why 03 12? what are base cases?
    //3 cases 1 case and 2
    if (n == 0)
        return 0;
    power(F, n - 1);
    return F[0][1];//why not 00
}
int main()
{
	cin>>n;
	printf("%lld\n",solve(n));
}

/*
https://discuss.codechef.com/questions/116710/codeforces-166e-help-needed-binary-matrix-exponentiation-for-a-begineer
*/