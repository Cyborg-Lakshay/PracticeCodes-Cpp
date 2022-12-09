#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n)
{

    // USING WHILE LOOP 

    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;

        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }



    // USING FOR LOOP 
    // for(int i=1;i<n;i++)
    // {
    //     int temp = arr[i];
    //     int j=i-1;
    //     for(;j>=0;j++)
    //     {
    //         if(temp<arr[j])
    //         {
    //             arr[j+1]=arr[i];
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     arr[j+1]=temp;
    // }


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

    insertion_sort(arr,size);

    return 0;
}