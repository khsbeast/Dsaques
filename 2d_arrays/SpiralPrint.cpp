/*
Spiral print a matrix  
4 Pointers approach
*/
#include<bits/stdc++.h>

using namespace std;
void spiral(int n,int m,int a[1000][1000])
{
    // declaring the 4 pointers
    int rowstart = 0;
    int rowend = n-1;
    int colstart = 0;
    int colend = m-1;

    while(rowstart<=rowend && colstart<=colend)   //because rowend decrements and becomes equal to row start
    {
        //traverse right
        for(int i = colstart;i <= colend;i++)
        cout << a[rowstart][i] << ' ';
        rowstart++;

        //traverse down
        for(int i = rowstart;i <= rowend;i++)
        cout << a[i][colend] <<' ';
        colend--;

        //traverse left
        if(rowstart<=rowend){
        for(int i = colend;i >= colstart;i--)
        cout << a[rowend][i] << ' ';
        rowend--;
        }

        //traverse up
        if(colstart<=colend){
        for(int i = rowend;i >= rowstart;i--)
        cout << a[i][colstart] << ' ';
        colstart++;
        }

    }

}
int main()
{
    int n,m;
    cin >> n >> m;
    int a[1000][1000]={0};
    for(int i  = 0; i <n;i++)
    {
        for(int j = 0;j <m;j++)
        {
            cin >> a[i][j];
        }
    }
    spiral(n,m,a);
}