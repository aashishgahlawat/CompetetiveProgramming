//dijkastra without priority queue TLE on test 31 link: http://codeforces.com/contest/20/submission/34416661



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
priority_queue< pair<long long int,int>, vector <pair<long long int,int>> , greater<pair<long long int,int>> > pq;
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


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    int boxCount;
    cin>>boxCount;
    int boxes[boxCount];
    bool occupied[boxCount];
    fill(occupied,occupied+boxCount,false);
    for(int i=0;i<boxCount;i++){
        cin>>boxes[i];
    }
    
    sort(boxes,boxes+boxCount);

    int minBoxVisible=boxCount;

    for(int i=0;i<boxCount;i++){
        for(int j=1;j<boxCount;j++){
            if(!occupied[j] && boxes[i]<boxes[j]){
                occupied[j]=true;
                minBoxVisible--;
                break;
            }
        }
    }
    cout<<minBoxVisible;
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}