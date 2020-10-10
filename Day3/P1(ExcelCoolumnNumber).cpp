#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;

   int res=0;
   int pos=0;

   while(pos<s.size())
   {
       res=res*26+s[pos]-'A'+1;
       pos++;
   }

   cout<<res<<endl;
    
}