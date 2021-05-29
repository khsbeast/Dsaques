/* find max element in an array*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int maxx = INT_MIN;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
    cin >> a[i];
    maxx=max(maxx,a[i]);
    }
    cout << maxx;

}