/* Wave print a 2d array */

#include<bits/stdc++.h>

using namespace std;

void wave(int a[10][10],int n,int m)
{
    for(int i = 0;i < m;i++)
    for(int j = 0;j < n;j++)
    {
        if(i%2==1)
        cout<<a[n-j-1][i]<<' ';
        else
        cout<<a[j][i] << ' ';
        
    }
}
int main()
{
    int a[10][10]={0};
    int n,m;
    cin >> n >> m;
    for(int i = 0;i <n;i++)
    for(int j = 0;j<m;j++)
    cin >> a[i][j];
    wave(a,n,m);
}