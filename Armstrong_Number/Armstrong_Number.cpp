#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool find_Armstrong(int num)
{
    
    int a=0,i=0,rem=0;
    int arr[100];
    int new_num=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        arr[i]={rem};
        i++;
        a++;
    }

    
    int sum=0;
    
    for(int i=0;i<a;i++)
    {
        sum = sum + pow(arr[i],a);
    }
    
    if(new_num==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int num;
    cin>>num;
    cout<<find_Armstrong(num);

    return 0;
}