#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
        {
            bool swapped = false;
            for(int j=0;j<n-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    swapped = true;
                }
            }
            if(swapped == false)
            {
                // to check if the array is allready sorted
                break;
            }
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

    bubble_sort(arr,size);

    return 0;
}