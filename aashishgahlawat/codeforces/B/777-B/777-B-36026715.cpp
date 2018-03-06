#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
#define INF -6e12
#define foriter(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
using namespace std;
int mod=1000000007;
long long ll_int_max=999999999999;
long long int answer=0;
priority_queue< pair<long long int,int>, vector <pair<long long int,int>> > pq;// , greater<pair<long long int,int>> 

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}
bool sortbysec(const pair<int,int> &a,//sort vector by second
              const pair<int,int> &b)
{
    return (a.second > b.second);// (.first .second) and use > in descending order or < for ascending order
}

int firstCard[11];
int secondCard[11];
int firstCardMax[11];
int secondCardmax[11];
int cardsCount;
int minFlicks, maxFlicks;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // aashish gahlawat
    cin>>cardsCount;
    string f,s;
    cin>>f>>s;
    int temp;
    for(int i=0;i<cardsCount;i++){
        temp=f[i]-'0';      //atoi
        firstCard[temp]++;
        firstCardMax[temp]++;
    }
    for(int i=0;i<cardsCount;i++){
        temp=s[i]-'0';
        secondCard[temp]++;
        secondCardmax[temp]++;
    }
    //for min flicks
    for(int i=0;i<10;i++){
        if(firstCard[i]!=0 && secondCard[i]!=0){    //eleminating no flick cases...
            if(secondCard[i]>=firstCard[i]){
                secondCard[i]-=firstCard[i];
                firstCard[i]=0;
            }else{
                firstCard[i]-=secondCard[i];
                secondCard[i]=0;
            }
        }
    }

    for(int i=0;i<10;i++){
        if(firstCard[i]!=0){
            for(int j=0;j<10;j++){
                if(secondCard[j]!=0){
                    if(j>i){
                        if(secondCard[j]>=firstCard[i]){
                            secondCard[j]-=firstCard[i];
                            firstCard[i]=0;
                        }else {
                            firstCard[i]-=secondCard[j];
                            secondCard[j]=0;
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<10;i++){
        minFlicks+=firstCard[i];
    }
    cout<<minFlicks<<endl;


    //for max flicks


    for(int i=0;i<9;i++){
        if(firstCardMax[i]!=0){
            for(int j=i+1;j<10;j++){
                if(secondCardmax[j]!=0){
                    if(secondCardmax[j]>=firstCardMax[i]){
                        maxFlicks+=firstCardMax[i];
                        secondCardmax[j]-=firstCardMax[i];
                        firstCardMax[i]=0;
                        break;
                    }else {
                        maxFlicks+=secondCardmax[j];
                        firstCardMax[i]-=secondCardmax[j];
                        secondCardmax[j]=0;
                        i--;
                        break;
                    }
                }
            }
        }
    }
    cout<<maxFlicks;

    #ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
    #endif // LOCAL
    return 0;
}
