#include<iostream>
#include<math.h>
#include<algorithm>
#include<bitset>
#include<deque>
#include<map>
#include<queue>  
#include<set>
#include<stack>
#include<string>
#include<cstring>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
unsigned long long d[60];
int main()
{
	unsigned long long a,b,ans=0;
	cin>>a>>b;
	d[0]=1;
	for(int i=1;i<=60;i++)
	{
		d[i]=d[i-1]*2;
	}
	for(int i=60;i>=1;i--)
	{
		for(int j=i-2;j>=0;j--)
		{
			unsigned long long c=d[i]-1-d[j];
			if(c<=b && c>=a)
			{
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
void fillPowOfTwo();
long long int powOfTwo[61];
long long int OnesDP[61];
int result[61];
long long int startPoint,endPoint;
void calculate();
int findIfAny(long long int x);
int findStart(long long startPoint){
    for(int i=1;i<=60;i++){
        if(powOfTwo[i]>startPoint) return i;
    }
    return 0;
}
int findEnd(long long int endPoint){
    for(int i=1;i<=60;i++){
        if(powOfTwo[i]>endPoint) return i;
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	fillPowOfTwo();
	cin>>startPoint>>endPoint;
	calculate();
	for(int i=1;i<=60;i++) cout<<result[i]<<" ";
	int i=findStart(startPoint);
	int j=findEnd(endPoint);
	int final=result[j-1]- result[i-1];
	cout<<endl<<final;
	cout<<endl<<i<<" "<<result[i]<<" start"<<" "<<j<<" "<<result[j]<<" end";
	return 0;
}

void fillPowOfTwo(){
    for(int i=1;i<=60;i++){
        powOfTwo[i]=pow(2,i);
        OnesDP[i]=powOfTwo[i]-1;
    }
}

void calculate(){
    long long int current;
    
    for(int i=1;i<=60;i++){
        int ans=0;
        for(int j=1;j<=i;j++){
            current=OnesDP[i] - powOfTwo[j];
            if(current>0){
                ans+=findIfAny(current);
            }
        }
        result[i]+=ans+result[i-1];
    }
}

int findIfAny(long long int number){
    int currentZeros=0;
    while(number!=0){
        if(number%2==0) currentZeros++;
        if(currentZeros>1) return 0;
        number/=2;
    }
    if(currentZeros==1) return 1;
    return 0;
}
*/