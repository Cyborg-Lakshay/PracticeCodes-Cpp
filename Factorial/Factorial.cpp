#include <iostream>
using namespace std;
int main()
{
    int i,mul,n;
    cout<<"Enter n ";
    cin>>n;

    

    for(i=1,mul=1;i<=n;i++)
    {
        // cout<<mul<<" * "<<i<<" = "<<i*mul<<endl;
        mul=mul*i;
    }
    cout<< "factorial of "<<n<<" is "<< mul<<endl;
    


    return 0;
}