#include <bits/stdc++.h>
using namespace std;
void premutate(int a[],int n)
{
    bool done = true;
    for(int i = n-2;i >= 0;i--)
    {
        if(a[i]<a[i+1])
        {
            done=false;
            reverse(a+i+1,a+n);
            auto lower = lower_bound(a+i+1,a+n,a[i]);
            int index = lower-a;
            swap(a[i],a[index]);
            break;
        }
    }
    if(done)
    reverse(a,a+n);
}
int main() {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i<n;i++)
        {
            cin >>a[i];
        }
        premutate(a,n);
        for(int i = 0;i < n;i++)
        cout << a[i] << ' ';
}
