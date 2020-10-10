#include<bits/stdc++.h>
using namespace std;
int solve(int *arr,int n)
{
    int min_val=INT_MAX;
    int max1=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min_val)
        {
            min_val=arr[i];
        }
        if(arr[i]-min_val>max1)
        {
            max1=arr[i]-min_val;
        }

    }
    return max1;
}
int main()
{
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<solve(arr,n);
    
}