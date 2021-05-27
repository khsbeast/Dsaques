// Arranging alternative positive and negative elements in order

#include<bits/stdc++.h>

using namespace std;
void rotate(int a[],int wrong,int exchange,int n)
{
    int temp = a[exchange];
    for(int i = exchange;i>wrong;i--)
    {
        a[i]=a[i-1];
    }
    a[wrong]=temp;
    for(int i = 0;i < n;i++)
    cout<<a[i] << ' ';
    cout << endl;
}
void pickwrong(int a[],int n)
{
    bool neg=false,pos=false;
    for(int i = 0;i < n;i++)
    {
        if((i%2==0&&a[i]>=0) || (i%2==1&&a[i]<0))
        {
            if(a[i]>=0)
            pos=true;
            else
            {
                neg=true;
            }
            int wrongindex=i;
            int exchangeindex=n-1;
            int j=i+1;
            while(j<n && exchangeindex-wrongindex>=2)
            {

                if(pos)
                {
                    if(a[j]<0)
                    {
                         exchangeindex=j;
                        //cout << wrongindex<<' '<<exchangeindex<<endl;
                        rotate(a,wrongindex,exchangeindex,n);
                        wrongindex+=2;
                        j++;
                    }
                }
                else if(neg)
                {
                    if(a[j]>=0)
                    {
                        exchangeindex=j;
                        rotate(a,wrongindex,exchangeindex,n);
                        wrongindex+=2;
                        j++;
                    }
                }
                j++;
            }
        }
    }

}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
    cin>>a[i];
    pickwrong(a,n);
   for(int i = 0;i < n;i++)
    cout<<a[i] << ' ';
}