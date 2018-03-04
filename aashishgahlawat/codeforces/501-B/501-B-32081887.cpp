/*
DDDD        EEEEE       EEEEE       PPPPP       I       K  K            A
D  DD       E           E           P   P       I       K K            A A
D   D       EEEEE       EEEEE       PPPPP       I       KK            AAAAA
D   D       E           E           P           I       K K          A     A
DDDDD       EEEEE       EEEEE       P           I       K  K        A       A
*/


#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#define endl '\n'
#define ll long long int
#define fori(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define pb push_back
#define mp make_pair
using namespace std;
string inputString[2000];
string OldNew[26][1000];
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	int Total;
	cin>>Total;
	std::map<string, string> edges;
	std::set<string> eachUniqueChain;
	std::vector<pair<string,string>> answer;//source destination(final in graph)
	string OldString,NewString;//each of atmost 20
	for(int i=0;i<Total;i++){
		cin>>OldString>>NewString;
		edges[OldString]=NewString;//extend graph add edges
		eachUniqueChain.insert(NewString);
	}
	for(__typeof((edges).begin()) iter = (edges).begin(); iter != (edges).end(); iter++){
		//chains start from old that are not at some point new, so will traverse only those chains that were 
		//inserted as old only....
		if(eachUniqueChain.count(iter->first)){// if iter->first is included in set, true else false.
			continue;
		}
		//if start of chain then....
		string currentString=iter->first;
		while(edges.count(currentString)){
			//traverse till end to find latest username of person
			currentString=edges[currentString];
		}
		answer.push_back(make_pair(iter->first,currentString));//fill name and latest name to answer...
	}
	cout<<answer.size();
	for(__typeof((answer).begin()) iter = (answer).begin(); iter != (answer).end(); iter++){
		cout<<endl<<iter->first<<" "<<iter->second;
	}
	return 0;
}