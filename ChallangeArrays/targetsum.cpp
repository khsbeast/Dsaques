/* target sum of pairs 2 pointers appproach */
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i < n;i++)
    cin >> a[i];
    int k;
    cin >> k;
    sort(a,a+n);
    for(int i = 0,j=n-1;i<j;)
    {
        if(a[i]+a[j] == k)
        {
            cout << a[i] << ' ' << a[j] << endl;
            i++;
            j--;
        }
        else if(a[i]+a[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}

