#include <iostream>
using namespace std;

int main()
{
    int n,i,count=0;
    cout<<" Enter the number to check prime or not ";
    cin>>n;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    
    if(count==0)
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }
    
    return 0;
}