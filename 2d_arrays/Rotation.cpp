/*Rotate a matrix by 90 degrees
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
 
reverse
4 3 2 1
8 7 6 5
12 11 10 9
16 15 14 13
Transpose
output
4 8 12 16
3 7 11 15
2 6 10 14 
1 5 9 13

We first reverse the rows than we do transpose of array


*/

#include<bits/stdc++.h>

using namespace std;
void rotate(int a[1000][1000],int n)
{
    // reverse the rows
    for(int i = 0;i < n;i++)
    reverse(a[i],a[i]+n);

    for(int i = 0;i < n;i++)
    {
        for(int j = i;j < n;j++)
        {
            if(i!=j)
            {
                swap(a[i][j],a[j][i]);
            }
        }
    }

}
int main(){
    int n;
    cin >> n;
    int a[1000][1000]={0};
    for(int i  = 0; i <n;i++)
    {
        for(int j = 0;j <n;j++)
        {
            cin >> a[i][j];
        }
    }
    rotate(a,n);
    for(int i  = 0; i <n;i++)
    {
        for(int j = 0;j <n;j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}