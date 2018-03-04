#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
const int inf=0x7fffffff;
using namespace std;
/*
struct trees{  
    int cord,height;  // coordinate and height  
} tree_xh[treeCount+2];
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	// your code goes here
	int treeCount;
	cin>>treeCount;
	std::vector<pair<int,int>> tree_xh(treeCount+2);//pair<int,int> tree_xh;
	int cord,height;
	for(int i=1;i<=treeCount;i++){
	    //cin>>tree_xh.first>>tree_xh.second;
	    cin>>cord>>height;
	    tree_xh[i]={cord,height};
	}
	int cuts=0;
	tree_xh[0].first= - inf;
	tree_xh[treeCount+1].first=inf;
	for(int i=1;i<=treeCount;i++){
	    if(tree_xh[i].first-tree_xh[i].second>tree_xh[i-1].first){  
             ++cuts;  
             continue;  
         }  
         if(tree_xh[i].first+tree_xh[i].second<tree_xh[i+1].first){ //right  
             ++cuts; 
             tree_xh[i].first+=tree_xh[i].second;  
         }
	}
	cout<<cuts;
	return 0;
}