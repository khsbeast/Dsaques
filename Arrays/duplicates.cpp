/*
I.p : ccoooding
O.p : coding
Approach : 2 pointers in a[j] != a[i]; i++ swap j++
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i,j;
    for(i = 0,j=1;j<s.length();j++)
    {
        if(s[i]!=s[j])
        {
            i++;
            swap(s[i],s[j]);
        }
    }
    s[i+1]='\0';
    for(int i = 0;s[i]!='\0';i++)
    cout << s[i];
}
