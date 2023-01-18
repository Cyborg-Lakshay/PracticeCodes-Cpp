#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int find_Duplicate(int arr[],int n)
{
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++)
    {
        ans=ans^i;
    }

    return ans;
}

int main ()
{
    int size;
    cin>>size;

    int arr[100];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<find_Duplicate(arr,size);

}
