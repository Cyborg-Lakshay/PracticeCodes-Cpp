#include <iostream>
using namespace std;

int main()
{
    int A[10]={6,10,15,19,21,28,31,35,37,40};
    int i,n=10,Key,l=0,h=9,mid;
    
    cout<<"Enter the Key ";
    cin>>Key;

    while(l<=h)
    {
        mid=(l+h)/2;
        if (A[mid]==Key)
        {
            cout<<"Key is found at "<<mid;
            return 0;
        }
        else if (A[mid]<Key)
        {
            l=mid+1;
        }
        else {
            h=mid-1;
        }
    }

    cout<<"Key not found";

    return 0;
}       