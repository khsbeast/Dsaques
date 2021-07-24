#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
void selectionsort(int a[],int n)
{
    for(int i = 0;i < n;i++){
        for(int j = i;j < n;j++)
        {
            if(a[j]<a[i])
                swap(a[j],a[i]);
        }
    }
}
void insertionsort(int a[],int n)
{
    for(int i = 0;i < n-1;i++)
    {
        int j = i+1;
        int key=a[j];
       while(i >=0 && key<a[i])
        {
            a[i+1]=a[i];
            i--;
        }
        swap(a[i+1],key);

    }
}
void linearsort(int a[],int n)
{
    int start = 0;
    int high = n-1;
    int mid = 0;
    while(mid<high)
    {
        if(a[mid]==0)
            swap(a[start++],a[mid++]);
        if(a[mid]==1)
            mid++;
        else
            swap(a[mid],a[high--]);
    }
}
bool comp(string s1,string s2)
{
    int minlen=min(s1.length(),s2.length());
    string s3,s4;
    s3=s1.substr(0,minlen);
    s4=s2.substr(0,minlen);
    if(s3==s4)
        return s1 > s2;
    return s1 < s2;
}
int main() {
    /*int n;
    cin >> n;
    int a[n];
    for(int i =0;i <n;i++)
        cin >> a[i];
    insertionsort(a,n);
    for(auto x : a)
        cout << x << ' ';*/
    int n;
    cin >> n;
    string s[n];
    for(int i = 0;i < n;i++)
        cin >> s[i];
    sort(s,s+n,comp);
    for(int i = 0;i < n;i++)
        cout << s[i] << endl;
    //cout << comp("bat","apple");
}
