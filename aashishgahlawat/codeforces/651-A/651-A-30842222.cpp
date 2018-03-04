#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
int t1=0,t2=0;
void evalualte(int a,int b);
int c=0;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int a,b;
	cin>>a>>b;
	if(a==1 && b==1){
	    cout<<0;
	    return 0;
	}
	if(a<=b){
	    evalualte(a,b);
	}else evalualte(b,a);
	cout<<c;
	return 0;
}

void evalualte(int x,int y){
    if(x<1||y<1) return;
    x++;
    y-=2;
    c++;
    if(x<3 && y<3){
        evalualte(x,y);
    }else if(x<3){
        evalualte(x,y);
    }else if(y<3){
        evalualte(y,x);
    }else evalualte(x,y);
}