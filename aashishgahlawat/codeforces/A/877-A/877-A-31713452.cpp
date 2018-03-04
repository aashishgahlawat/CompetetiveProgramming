#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	// aashish gahlawat
	string inputString;
	cin>>inputString;
	int ExactOnce=0;
	int current=0;
	//Danil", "Olya", "Slava", "Ann" and "Nikita"
	string Danil="Danil",Olya="Olya",Slava="Slava",Ann="Ann",Nikita="Nikita";
	for(int i=0;i<inputString.length();i++){
	    current=0;
	    switch(inputString[i]){
	        case 'D':{for(int j=1;j<5;j++){
	            if(inputString[i+j]==Danil[j]) current++;
	            else break;
	        }
	            if(current==4){ExactOnce++;}
	        }
	        break;
	        case 'O':{for(int j=1;j<4;j++){
	            if(inputString[i+j]==Olya[j]) current++;
	            else break;
	        }
	            if(current==3){ExactOnce++;}
	        }
	        break;
	        case 'S':{for(int j=1;j<5;j++){
	            if(inputString[i+j]==Slava[j]) current++;
	            else break;
	        }
	            if(current==4){ExactOnce++;}
	        }
	        break;
	        case 'A':{for(int j=1;j<3;j++){
	            if(inputString[i+j]==Ann[j]) current++;
	            else break;
	        }
	            if(current==2){ExactOnce++;}
	        }
	        break;
	        case 'N':{for(int j=1;j<6;j++){
	            if(inputString[i+j]==Nikita[j]) current++;
	            else break;
	            
	        }
	            if(current==5){ExactOnce++;}
	        }
	    }
	    if(ExactOnce>1) break;
	    i+=current;
	}
	if(ExactOnce==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}