/*Max sum submatrix in row col wise sorted matrix*/

#include<bits/stdc++.h>

using namespace std;
void maxsum(int a[1000][1000],int n,int m)
{
    int sum = 0;
    //prefix sum row
    for(int i = 0;i < n;i++)
    for(int j = 1;j<m;j++)
    a[i][j]+=a[i][j-1];

    //prefix sum col
    for(int i = 0;i < n;i++)
    for(int j = 1;j<m;j++)
    a[j][i]+=a[j-1][i];

    for(int i = 0;i < n;i++){
    for(int j = 0;j<m;j++)
    cout << a[i][j] << ' ';
    cout << endl;
    }

    int x = n-1;
    int y = m-1;
    for(int i= n-1;i >=0;i--)
    {
        for(int j = m-1;j>=0;j--)
        {
            int p = a[x][j-1];
            int q = a[i-1][y];
            int d = a[i-1][j-1];
            if(j-1 < 0)
            {
                p=0;d=0;
            }
            if(i-1 < 0)
            {
                q=0;d=0;
            }
            sum = a[x][y]-p-q+d;
            cout << sum << ' ';
        }
        cout << endl;
    }
}


int main()
{
    int n,m;
    cin >> n >> m;
    int a[1000][1000]={0};
    for(int i = 0;i < n;i++)
    for(int j = 0;j < m;j++)
    cin >> a[i][j];
    maxsum(a,n,m);
}