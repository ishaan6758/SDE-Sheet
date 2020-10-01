#include<bits/stdc++.h>
using namespace std;
void KadanesAlgo(int *arr,int n)
{
    int sum=0;
    int max1=INT_MIN;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        sum=0;

        if(max1<sum)
        max1=sum;
    }
    cout<<max1;
}
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);

    KadanesAlgo(arr,n);
}