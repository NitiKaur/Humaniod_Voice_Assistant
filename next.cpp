#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[4]={1,1,2,3};
  int sum=4;
  int n=4;
  int t[n+1][sum+1];
  for(int i=0;i<n+1;i++)
    {   
    for(int j=0;j<sum+1;j++)
    {
        if(i==0)
            t[i][j]=0;
        if(j==0)
            t[i][j]=1;

    }
    }
  for(int i=1;i<n+1;i++)
  {
      for(int j=1;j<sum+1;j++)
      {
          if(arr[i-1]<=j)
          t[i][j]=(t[i-1][j-arr[i-1]] + t[i-1][j]);
          else
              t[i][j]=t[i-1][j];
          
      }
  }
  for(int i=0;i<n+1;i++)
  {
      for(int j=0;j<sum+1;j++)
      {
          cout<<t[i][j];
      }
      cout<<endl;
  }
   cout<<t[n][sum];

}