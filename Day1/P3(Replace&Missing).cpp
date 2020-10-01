#include<bits/stdc++.h>
using namespace std;
void solve(int *arr,int n)
{
    long long int size=n;
    long long Sum=(size*(size+1))/2;
    long long squareSum=(size*(size+1)*(2*size+1))/6;

    for(int i=0;i<size;i++)
    {
        Sum-=arr[i];
        squareSum-=arr[i]*arr[i];

    }

    int missing=(Sum+squareSum/Sum)/2;
    int repeating=missing-Sum;

    cout<<missing<<" "<<repeating;

}
int main()
{
    int arr[]={1,2,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    solve(arr,n);
}
