#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;
int main()
{
    string s;
    int check1=0,check2=0,check3=0;
    while(cin>>s)
    {
       int len=s.size();
       for(int i=len-1;i>=0;i--)
       {
           check1=1;
           for(int j=i-1;j>=0;j--)
           {
               check2=1;
               for(int k=j-1;k>=0;k--)
               {
                   check3=1;
                   int num=(s[k]-'0')*100+(s[j]-'0')*10+(s[i]-'0');
                   if(num%8==0){cout<<"YES\n"<<num<<endl;return 0;}
               }

               int num=(s[j]-'0')*10+(s[i]-'0');
               if(num%8==0){cout<<"YES\n"<<num<<endl;return 0;}
           }
           int num=(s[i]-'0');
               if(num%8==0){cout<<"YES\n"<<num<<endl;return 0;}
       }
       cout<<"NO\n";
    }




    return 0;
}