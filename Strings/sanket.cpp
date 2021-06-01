/* abbabaab aaaaaaa */ 

#include<bits/stdc++.h>

using namespace std;
int solve(string s,int k,char ch)
{
    int i =0;
    int j = 0;
    int kount=0;
    int maxx = 0;
    while (j<s.length())
    {
        if(s[j]==ch)
        {
            kount++;
            if(kount==k+1)
            {
                maxx = max(maxx,j-i);
                while(i < s.length() && s[i]!=ch)
                i++;
                i++;
                kount--;
            }
        }
        j++;
    }

    return max(maxx,j-i);
}
int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int maxx1= solve(s,k,'b');
    int maxx2= solve(s,k,'a');
    cout << max(maxx1,maxx2);
    return 0;
}