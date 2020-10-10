#include<bits/stdc++.h>
using namespace std;
int merge(int *arr,int n,int *temp,int left,int mid,int right)
{
    int i,j,k;
    int invcount=0;
    i=left;
    j=mid;
    k=left;

    while((i<=mid-1)&&(j<=right))
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];

            invcount+=(mid-i);
        }
        
    }

    while(i<=mid-1)
    temp[k++]=arr[i++];

    while(j<=right)
    temp[k++]=arr[j++];

    for(int i=left;i<=right;i++)
    arr[i]=temp[i];

    return invcount;
}
int mergesort(int *arr,int n,int *temp,int left,int right)
{
    int mid,invcount=0;

    if(right>left)
    {
        mid =(right+left)/2;
        invcount+=mergesort(arr,n,temp,left,mid);
        invcount+=mergesort(arr,n,temp,mid+1,right);
        invcount+=merge(arr,n,temp,left,mid+1,right);

    }
    return invcount;
}
int main()
{
    int arr[]={1,20,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    cout<<mergesort(arr,n,temp,0,n-1);
}