#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
  //  cout<<n<<m;
  bool row=false;
  bool col=false;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(i==0 && matrix[i][j]==0)
          row=true;
          else if(j==0 && matrix[i][j]==0)
          col=true;
          else if(matrix[i][j]==0)
          {
              matrix[0][j]=0;
              matrix[i][0]=0;
          }
      }

  }
  for(int i=1;i<n;i++)
  {
      for(int j=1;j<m;j++)
      {
          if(matrix[0][j]==0||matrix[i][0]==0 )
          {
              matrix[i][j]=0;
          }
      }
  }
  if(row==true)
  {
      for(int i=0;i<n;i++)
      matrix[0][i]=0;

  
  }
    if(col==true)
    {
        for(int j=0;j<m;j++)
        {
            matrix[j][0]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }
}
int main()
{
    vector<vector<int>> matrix{{1,1,1},
                                {1,0,1},
                                {1,1,1}};

    solve(matrix);                            

}