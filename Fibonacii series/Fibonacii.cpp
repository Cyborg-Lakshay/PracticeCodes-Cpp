#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int n;
    cin>>n;
    cout<<a <<" " <<b;

    for(int i=0;i<=n;i++)
    {

        int nextNumber= a+b;

        cout<<" "<< nextNumber;
        
        a=b;
        b=nextNumber;


    }
    return 0;

}