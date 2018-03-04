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
long long int answer=0;

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}
int row,column;
char problem[501][501];
int dpRow[501][501];
int dpCol[501][501];
int queries;
int r1,c1,r2,c2;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>row>>column;
    char dummy;
    int rowGood=0,colGood=0;
    for(int i=0;i<=column;i++) problem[0][i]='#';
    for(int i=0;i<=row;i++) problem[i][0]='#';
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cin>>dummy;
            problem[i][j]=dummy;
            if(dummy=='.' && problem[i][j-1]=='.'){
                rowGood++;
            }
            dpRow[i][j]=rowGood;
        }
        rowGood=0;
    }
    /*for(int i=0;i<=row;i++){
        for(int j=0;j<=column;j++){
            cout<<problem[i][j];
        }
        cout<<endl;
    }*/
    for(int i=1;i<=column;i++){
        for(int j=1;j<=row;j++){
            if(problem[j][i]=='.' && problem[j-1][i]=='.'){
                colGood++;
            }
            dpCol[j][i]=colGood;
            //cout<<dpCol[j][i]<<" ";
        }
        //cout<<endl;
        colGood=0;
    }
    /*for(int i=0;i<=row;i++){
        for(int j=0;j<=column;j++){
            cout<<dpRow[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=column;j++){
            cout<<dpCol[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cin>>queries;
    while(queries--){
        answer=0;
        cin>>r1>>c1>>r2>>c2;
        //r1--,r2--,c1--,c2--;
        for(int i=r1;i<=r2;i++){
            answer+=dpRow[i][c2]-dpRow[i][c1];
        }
        for(int i=c1;i<=c2;i++){
            answer+=dpCol[r2][i]-dpCol[r1][i];
        }
        cout<<answer<<endl;
        //return 0;
    }
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}