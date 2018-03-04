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
long long int answer;
void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}

struct myclass {           // function object type:
  void operator() (int i) {std::cout << ' ' << i;}//() for operator used second () for param
} myobject;//for_each (myvector.begin(), myvector.end(), myobject); in main

bool sortbysec(const pair<int,int> &a,//sort vector by second
              const pair<int,int> &b)
{
    return (a.second < b.second);//.first > in desc first
}
deque <string> directories;
//getline(cin,line);
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    int testCases;
    cin>>testCases;
    string cmd;
    string path;
    //directories.push_back("aashish gahlawat");
    auto pwd=[&](){
        cout<<"/";
        string dummy;
        int currSize=directories.size();
        for(int i=0;i<currSize;i++){
            dummy=directories.front();
            cout<<dummy<<"/";
            directories.pop_front();
            directories.push_back(dummy);
        }
        cout<<endl;
    };

    while(testCases--){
        cin>>cmd;
        if(cmd=="pwd"){
            pwd();
            //return 0;
        }else {
            //its cd
            cin>>path;
            int pathLen=path.length();
            if(path[0]=='/') directories.clear();
            for(int i=0;i<pathLen;i++){
                if(path[i]!='.'){
                    if(path[i]=='/') i++;
                    string temp="";
                    while(path[i]!='/' && i<pathLen){
                        temp+=path[i];
                        i++;
                    }
                    directories.push_back(temp);
                } else if(path[i]=='.'){
                    i++; i++;
                    directories.pop_back();
                }
            }
        }
    }
    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}