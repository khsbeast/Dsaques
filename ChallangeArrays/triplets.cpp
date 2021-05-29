/* target sum finding triplets */
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
    cin >> a[i];
    int o; 
    cin >> o;
    sort(a,a+n);
    for(int i = 0;i < n;i++)
    {
        for(int j = i+1,k=n-1;j<k;)
        {
           if(a[i]+a[j]+a[k] == o)
        {
            cout << a[i] << ' ' << a[j] << ' ' << a[k]<< endl;
            k--;
            j++;
        }
        else if(a[j]+a[k]+a[i] < o)
        {
            j++;
        }
        else
        {
            k--;
        }
        }
    }
}