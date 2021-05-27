//quick select method -> try medians of medians gfg
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int part(int arr[],int l,int r)
{
    int pivot = arr[r];int i = l-1;
    for(int j = l;j<=r-1;j++)
    {
        if(arr[j]<pivot)
        {
            swap(&arr[i+1],&arr[j]);
            i++;
        }
        swap(&arr[i+1],&arr[r]);
    }
    return i+1;
}
int quick(int arr[], int l,int r,int k)
{
    if(k > 0 && k <=r-l+1)
    {
        int index = part(arr,l,r);

        if(index-l == k)
        return arr[index];
        else if(index-l > k-1 )
        {
            // recurse the left sub array
            return quick(arr,l,index-1,k);
        }
        else
        {
            return quick(arr,index+1,r,k-index+l-1);
        }
        
    }
    return -1;
}
int main()
{
    int arr[] = { 12, 3, 5, 7, 4, 19, 26 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 3;
    cout << "K'th smallest element is " << quick(arr, 0, n - 1, k);
    return 0;

}