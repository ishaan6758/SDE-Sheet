#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;


    long long nn=n;
    int ans=1;
    while (nn!=0)
    {
        if(nn%2==0)
        {
            x=x*x;
            nn=nn/2;
        }
        else if(nn%2==1)
        {
            ans=ans*x;
            nn=nn-1;
        }
        
    }
    
    cout<<ans;

}