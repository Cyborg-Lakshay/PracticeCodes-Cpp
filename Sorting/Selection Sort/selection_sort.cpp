#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    int smallest;

    for(int i=0;i<n-1;i++)
    {
        smallest=i;

        
        for(int j=i+1;j<n;j++)
        {

            if(arr[smallest]>arr[j])
            {
                smallest=j;
            }
            
        }
        
        swap(arr[smallest],arr[i]);

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int size;
    cin>>size;

    int arr[100];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    selection_sort(arr,size);

    return 0;
}