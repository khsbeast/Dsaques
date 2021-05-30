#include<bits/stdc++.h>

using namespace std;
void spiral(int a[1000][1000],int n,int m)
{
  int rowstart=0;
  int rowend=n-1;
  int colstart=0;
  int colend=m-1;

  while(rowstart<=rowend && colstart<=colend)
  {
    for(int i = rowstart;i<=rowend;i++)
    cout << a[i][colstart] << ' ';
    colstart++;

    for(int i = colstart;i<=colend;i++)
    cout << a[rowend][i] << ' ';
    rowend--;
    if(colstart<=colend){
    for(int i = rowend;i>=rowstart;i--)
    cout << a[i][colend] << ' ';
    colend--;
    }
    if(rowstart<=rowend){
    for(int i = colend;i>=colstart;i--)
    cout<< a[rowstart][i] << ' ';
    rowstart++;
    }

  }
}
int main()
{
  int n,m;
  cin>>n>>m;
  int a[1000][1000]={0};
  for(int i = 0;i < n;i++)
  for(int j = 0;j < m;j++)
  cin >> a[i][j];
  spiral(a,n,m);
}