#include<bits/stdc++.h>
using namespace std;
void solve(int *a1,int *a2,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        if(a1[i]>a2[0])
        {
            swap(a1[i],a2[0]);
            int first=a2[0];

            int k;
            for(k=1;k<m&& a2[k]<first;k++)
            a2[k-1]=a2[k];

            a2[k-1]=first;
        }
    }

    for(int i=0;i<n;i++)
    cout<<a1[i];
    
    for(int i=0;i<m;i++)
    cout<<a2[i];

}
int main()
{
    int arr1[]={1,2,3};
    int arr2[]={0,10};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);

    solve(arr1,arr2,n,m);
}