#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int numberOfBoys;
	int numberOfGirls;
	cin>>numberOfBoys;
	int boysSkills[numberOfBoys];
	for(int i=0;i<numberOfBoys;i++){
	    cin>>boysSkills[i];
	}
	cin>>numberOfGirls;
	int girlsSkills[numberOfGirls];
	for(int i=0;i<numberOfGirls;i++){
	    cin>>girlsSkills[i];
	}
	int b=sizeof(boysSkills)/sizeof(boysSkills[0]);
	int g=sizeof(girlsSkills)/sizeof(girlsSkills[0]);
	sort(boysSkills,boysSkills+b,greater<int>());
	sort(girlsSkills,girlsSkills+g,greater<int>());
	/////////////////////////////////
	int maxGroups=0;
	/*for(int i=0;i<numberOfBoys;i++){
	    if(boysSkills[i]!=-1){
	    for(int j=0;j<numberOfGirls;j++){
	        if(girlsSkills[j]!=-1){
	            if(abs(boysSkills[i]- girlsSkills[j])==0){
	                maxGroups++;
	                boysSkills[i]=-1;
	                girlsSkills[j]=-1;
	                break;
	            }
	        }
	    }
	    }
	}*/
	
		for(int i=0;i<numberOfBoys;i++){
		    if(boysSkills[i]!=-1){
	    for(int j=0;j<numberOfGirls;j++){
	        if(girlsSkills[j]!=-1){
	            if(abs(boysSkills[i]- girlsSkills[j])<=1){
	                maxGroups++;
	                boysSkills[i]=-1;
	                girlsSkills[j]=-1;
	                break;
	            }
	        }
	    }
		}
	}
	/*for(int i=0;i<numberOfBoys;i++)cout<<boysSkills[i]<<" ";
	cout<<endl;
	for(int i=0;i<numberOfGirls;i++)cout<<girlsSkills[i]<<" ";
	cout<<endl;*/
	cout<<maxGroups;
	return 0;
}