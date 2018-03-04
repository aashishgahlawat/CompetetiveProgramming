#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string f(string s){
    if(s.size()%2!=0){//odd length 1,3...
        return s;//nly possible if both are equal
    }
    string s1=f(s.substr(0,s.size()/2));
    string s2=f(s.substr(s.size()/2,s.size()/2));
    if(s1<s2)//sorting , adding smaller string first and them comparing both
        return s1+s2;
    else
        return s2+s1;
}
int main()
{
    string a,b,c,d;
    string s;string t;
    cin>>s>>t;
    int n=s.size();
    if(f(s)==f(t))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}