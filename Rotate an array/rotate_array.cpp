#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n,int key)
{
    int j=0;
    int arr1[100];
    while(j<key)
    {
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                arr1[i]=arr[i-1];
            }
            else
            {
                arr1[i]=arr[n-1];
            }
            
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i]=arr1[i];
        }
    
        j++;

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    
    // KEY is the number of times we need to rotate the array 
    int key; 
    cin>>key;

    int arr[100];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rotate(arr,n,key);

}