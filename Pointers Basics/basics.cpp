#include <iostream>
using namespace std;

void update(int *p)
{
    // IT WILL ONLY UPDATE IN THIS FUNCTION NOT MAIN FUNCTION
    // WE CANNOT UPDATE THE ADDRESS THROUGH FUNCTION
    p=p+1; 
    cout<<p<<endl;

    // WE CAN UPDATE THE VALUE VIA FUNCTION 
    // *p=*p+1;

}

int getSum(int *arr,int n)   // int arr[]=int *arr IN FUNCTION ARRAY IS PASSED AS POINTER
{
    cout<<endl<<"Size of :"<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n=5;
    int *p=&n;

    cout<<"Before "<<p<<endl; 
    update(p);
    cout<<"After "<<p<<endl; 

    int arr[5]={1,2,3,4,5};

    cout<<"Sum is "<<getSum(arr+3,2);
    return 0;
}