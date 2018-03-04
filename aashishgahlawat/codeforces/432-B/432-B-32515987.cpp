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
//long long int answer;

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}

int homeColorTeams[100001];
int awayColorTeams[100001];
int teamsCount;
int home,away;
std::vector<pair<int,int>> teams;
//std::vector<pair<int,int>> answer;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>teamsCount;
    for(int i=1;i<=teamsCount;i++){
        cin>>home>>away;
        homeColorTeams[home]++;
        awayColorTeams[away]++;
        teams.pb(mp(home,away));
    }
    int nOne=teamsCount-1;
    int nTwo=2*nOne;
    int restHome;
    int finalHome;
    for(int i=0;i<teams.size();i++){
        restHome=homeColorTeams[teams[i].second];
        //as xi not equals yi... hence no -1
        finalHome=nOne+restHome;
        //answer.pb(mp(finalHome,nTwo-finalHome));
        cout<<finalHome<<" "<<nTwo-finalHome<<endl;
    }

    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}