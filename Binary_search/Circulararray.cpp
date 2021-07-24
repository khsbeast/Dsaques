#include<bits/stdc++.h>

using namespace std;

int rotate_binary(int a[],int k,int n)
{
    int start=0;
    int end = n-1;

    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==k)
        return mid;
        if(a[start] <= a[mid])
        {
            if(k>=a[start] && k<a[mid])
            end = mid-1;
            else
            start = mid+1;
        }
        else{
            if(k>a[mid] && k <= a[end])
            start =  mid+1;
            else
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
    cin >> a[i];
    int k;
    cin >> k;
    cout << rotate_binary(a,k,n);
}