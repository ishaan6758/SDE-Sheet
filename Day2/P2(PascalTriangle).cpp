#include<bits/stdc++.h>
using namespace std;
void triangle(int n)
{
    vector<vector<int>> res(n);
    for(int i=0;i<n;i++)
    {
        res[i].resize(i+1);
        res[i][0]=res[i][i]=1;

        for(int j=1;j<i;j++)
        res[i][j]=res[i-1][j-1]+res[i-1][j];
    }

    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    

    triangle(5);
}