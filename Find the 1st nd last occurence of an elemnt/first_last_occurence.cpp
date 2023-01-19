#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void occurence(int arr[],int n,int key)
{
    int l = 0, h = n-1;

    while(arr[l]!=arr[h])
    {
        int mid = l + ((h-l)/2);

        if(arr[mid]<key)
        {
            l=mid+1;
            if(arr[l]==key)
            {
                cout<<"First occurence : "<<l<<endl;
                
                if(arr[h]!=key)
                {
                    while(arr[h]!=key)
                    {
                        h--;
                    }
                    cout<<"Last occurence : "<<h<<endl;
                }
                else
                {
                    cout<<"Last occurence : "<<h<<endl;
                }
            }
        }

        else if(arr[mid]>key)
        {
            h=mid-1;
            if(arr[h]==key)
            {

            if(arr[l]!=key)
                {
                    while(arr[l]!=key)
                    {
                        l++;
                    }
                    cout<<"First occurence : "<<l<<endl;
                    cout<<"Last occurence : "<<h<<endl;
                }
            else
                {
                    cout<<"First occurence : "<<l<<endl;
                    cout<<"Last occurence : "<<h<<endl;
                }
            }
        }

        else 
        {
            while(arr[mid]==key)
            {
                mid--;
            }
            cout<<"First occurence : "<<mid+1<<endl;

            while(arr[mid+1]==key)
            {
                mid++;
            }
            cout<<"Last occurence : "<<mid<<endl;
            return;
        }
    }

    // WHEN ELEMENTS AT L AND H ARE SAME .... IT WILL NOT ENTER THE LOOP FOR THIS CASE  

    if(arr[l]==arr[h]) //ye isliye likha hai taki samajh aa jae NOT NECESSARY TO WRITE THE IF CONDITION 
    {
        cout<<"First occurence : "<<l<<endl;
        cout<<"Last occurence : "<<h<<endl;
    }
    

}

// void occurence(int arr[],int n,int key)
// {
//     int l = 0, h = n-1;

//     while(arr[l]!=arr[h])
//     {
//         if(arr[l]!=key)
//         {
//             l++;
//         }
//         else
//         {
//             cout<<"First occurence : "<<l<<endl;
//             while(arr[l]==key)
//             {
//                 l++;
//             }
//             cout<<"Last occurence : "<<l-1<<endl;
//             h=l-1;
//             return;
//         }
//     }

//     cout<<"First occurence : "<<l<<endl;

//     cout<<"Last occurence : "<<h<<endl;
    
// }

int main()
{
    int n;
    cin>>n;

    int key;
    cin>>key;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    occurence(arr,n,key);

}
