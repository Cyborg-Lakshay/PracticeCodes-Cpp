#include <iostream>
using namespace std;

bool isPrime (int num)
{
    for ( int i=2;i<=(num/2);i++ )
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;

    int num = isPrime(n);

    if (num==0)
    {
        cout<<"is not prime"<<endl;
    }
    else 
    {
        cout<<"is prime"<<endl;
    }
    
    return 0;

}
