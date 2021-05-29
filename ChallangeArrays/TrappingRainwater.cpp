/*  Maximum amount of rainwater that can be trapped along buildings */

#include<bits/stdc++.h>

using namespace std;
int trapped2(int a[],int n)
{
    // 2 pointer approach
    int leftmax=0;
    int rightmax=0;
    int sum = 0;
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(a[i]<=a[j])
        {
            leftmax=max(a[i],leftmax);
            sum+=leftmax-a[i];
            //cout << "i : " << sum << endl;
            i++;
        }
        else
        {
            rightmax=max(rightmax,a[j]);
            sum+=rightmax-a[j];
            //cout << "j : "<< sum << endl;
            j--;
        }        
    }
    return sum;
}
int trapped(int a[],int n)
{
    int sum=0;
    //biggest building in left
    int left[n];
    left[0]=a[0];
    for(int i = 1;i < n;i++)
    left[i]=max(a[i],left[i-1]);

    //biggest building in Right
    int right[n];
    right[n-1]=a[n-1];
    for(int i = n-2;i >= 0;i--)
    right[i]=max(a[i],right[i+1]);

    for(int i = 0;i<n;i++)
    {
        sum+= min(right[i],left[i]) -a[i] > 0 ? min(right[i],left[i])-a[i] : 0;
    }
    return sum;

}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
    cin >> a[i];
    cout << trapped2(a,n);
}