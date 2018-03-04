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

void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});//from to fn, lambda
    cout << endl;
}

struct myclass {           // function object type:
  void operator() (int i) {std::cout << ' ' << i;}//() for operator used second () for param
} myobject;//for_each (myvector.begin(), myvector.end(), myobject); in main

int main() {
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	char fourByfour[4][5];
	for(int i=0;i<4;i++){
		cin>>fourByfour[i];
	}
	//fn has to be declated before...
	auto Evaluate=[&]()->bool{//lambda by [reference]... with no (param).. ->return type(can be igonored)
		//check row
		int rowX=0;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(fourByfour[i][j]=='x'){
					rowX++;
					if(rowX==3){ 
						//cout<<"row"<<rowX<<endl;
						return true;}
				}else rowX=0;
			}
			rowX=0;
		}
		//check column
		int colX=0;
		for(int j=0;j<4;j++){
			for(int i=0;i<4;i++){
				if(fourByfour[i][j]=='x'){
					colX++;
					if(colX==3){ 
						//cout<<"col"<<colX<<endl;
						return true;}
				}else colX=0;
			}
			colX=0;
		}
		//check diagonal
		if((fourByfour[0][0]=='x' && fourByfour[1][1]=='x' && fourByfour[2][2]=='x') ||
			(fourByfour[3][3]=='x' && fourByfour[1][1]=='x' && fourByfour[2][2]=='x') ||
			(fourByfour[0][1]=='x' && fourByfour[1][2]=='x' && fourByfour[2][3]=='x') ||
			(fourByfour[1][0]=='x' && fourByfour[2][1]=='x' && fourByfour[3][2]=='x') ||
			(fourByfour[3][0]=='x' && fourByfour[2][1]=='x' && fourByfour[1][2]=='x') ||
			(fourByfour[0][3]=='x' && fourByfour[2][1]=='x' && fourByfour[1][2]=='x') ||
			(fourByfour[2][0]=='x' && fourByfour[1][1]=='x' && fourByfour[0][2]=='x') ||
			(fourByfour[3][1]=='x' && fourByfour[2][2]=='x' && fourByfour[1][3]=='x') ){
			//cout<<"diagonal"<<endl;
			return true;
		}
		return false;// else will return some +ve val
	};

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(fourByfour[i][j]=='.'){//only one step
				fourByfour[i][j]='x';
				if(Evaluate()){
					cout<<"YES";
					/*
					for(int x=0;x<4;x++){
						cout<<endl;
						for(int y=0;y<4;y++){
							cout<<fourByfour[x][y];
						}
					}
					*/
					exit(0);}
				fourByfour[i][j]='.';//reset it
			}
			
		}
	}
	cout<<"NO";//puts("NO");

	#ifndef ONLINE_JUDGE
    cout<<endl<<endl<< "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
	#endif // LOCAL
	return 0;
}