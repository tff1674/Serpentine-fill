#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,y,number,i,j,n;
    cout<<"enter n:";
    cin>>n;
    if(n>10||n<0)
        cout<<"The number is out of range!"<<endl;
    else{
    int a[n][n];
    for(i=0;i<=n-1;i++)
        for(j=0;j<=n-1;j++)
        a[i][j]=0;
    x=0;
    y=n-1;
    number=a[x][y]=1;
    while(number<n*n)
    {
      while(x+1<=n-1&&a[x+1][y]==0)
      {
         x=x+1;
         a[x][y]=++number;
      }
      while(y-1>=0&&a[x][y-1]==0)
      {
         a[x][--y]=++number;
      }
      while(x-1>=0&&a[x-1][y]==0)
      {
          a[--x][y]=++number;
      }
      while(y+1<=n-1&&a[x][y+1]==0)
      {
          a[x][++y]=++number;
      }
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cout<<setiosflags(ios::left)<<setw(5)<<a[i][j];
            if(j==n-1) cout<<endl;
        }
    }
    }
    return 0;
}
