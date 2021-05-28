/*Sum of all submatrixes present in a matrix using 3 approaches*/

#include <bits/stdc++.h>

using namespace std;
void sum1(int a[1000][1000], int n, int m)
{
    //every possible submatrix
    int sum = 0;
    for (int tli = 0; tli < n; tli++)
    {
        for (int tlj = 0; tlj < m; tlj++)
        {
            for (int bri = tli; bri < n; bri++)
            {
                for (int brj = tlj; brj < m; brj++)
                {
                    for(int i = tli;i<=bri;i++)
                    for(int j = tlj;j<=brj;j++)
                    sum+=a[i][j];
                }
            }
        }
    }
    cout << sum;
}
void sum2(int a[1000][1000], int n, int m)
{
    //creating prefix sum

    //row wise
    for(int i = 0;i < n;i++)
    for(int j = 1;j < m;j++)
    a[i][j]+=a[i][j-1];

     //col wise
    for(int i = 0;i < m;i++)
    for(int j = 1;j < n;j++)
    a[j][i]+=a[j-1][i];
    //every possible submatrix with prefix sum array
   int sum = 0;
    for (int tli = 0; tli < n; tli++)
    {
        for (int tlj = 0; tlj < m; tlj++)
        {
            for (int bri = tli; bri < n; bri++)
            {
                for (int brj = tlj; brj < m; brj++)
                {
                    sum += a[bri][brj]-a[tli-1][brj]-a[bri][tlj-1]+a[tli-1][tlj-1];
                }
            }
        }
    }
    cout << sum;
}


void sum3(int a[1000][1000], int n, int m)
{ 
    // contribution of every element in total sum 
    int sum = 0;
    for(int i = 0;i<n;i++)
    for(int j = 0;j <m;j++)
    sum+=a[i][j]*((i+1)*(j+1) * (n-i)*(m-j));
 
    cout << sum;
    
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[1000][1000] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    sum3(a, n, m);
}