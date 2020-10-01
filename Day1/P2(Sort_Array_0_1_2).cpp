#include<bits/stdc++.h>
using namespace std;
// This problem can be solved using 2 different approaches a.) Counting Sort b.) Dutch National Flag Problem
void sort_array(int *arr,int n) // 2 Traversal
{
    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        count0++;
        else if(arr[i]==1)
        count1++;
        else
        count2++;
    }
    int j=0;

    while(count0--)
    {
        arr[j++]=0;
    }
    while(count1--)
    {
        arr[j++]=1;    
    }
    while(count2--)
    {
        arr[j++]=2;
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
void sort_array2(int *arr,int n) // Only One Traversal and Faster 
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
       switch(arr[mid])
       {
           case 0:
           {
               swap(arr[low],arr[mid]);
               low++;
               mid++;
               break;
           }
           case 1:
           {
                mid++;
                break;
           }
           case 2:
           {
               swap(arr[mid],arr[high]);
               high--;
               break;
           }
       }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
int main()
{
    int arr[]={1,1,2,0,2,1,0,2,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    //sort_array(arr,n);
    sort_array2(arr,n);
}