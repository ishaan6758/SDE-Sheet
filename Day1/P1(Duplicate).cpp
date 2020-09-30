#include<bits/stdc++.h>
using namespace std;
int duplicate1(int *arr,int n)
{
     for(int i=0;i<n;i++)
        {
            if(arr[abs(arr[i])-1]>0)
            {
                arr[abs(arr[i])-1]=-1*arr[abs(arr[i])-1];
            }
            else
            {
                return abs(arr[i]);
            }
        }
}
int duplicate2(int *arr,int n)
{
        int slow=arr[0];
        int fast=arr[0];

        while(slow!=fast)
        {
            slow=arr[slow];
            fast=arr[arr[fast]];
        }
        fast=arr[0];

        while(slow!=fast)
        {
            fast=arr[fast];
            slow=arr[slow];
        }
        return arr[slow];
}
int main()
{
        int arr[6]={1,5,2,3,4,5};
        int n=6;

       // cout<<duplicate1(arr,n)<<endl;
        cout<<duplicate2(arr,n)<<endl;

        return 0;

}