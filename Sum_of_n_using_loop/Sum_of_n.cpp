#include <iostream>
using namespace std;
int main()
{
    int i,sum,n;
    cout<<"Enter n ";
    cin>>n;

    

    for(i=1,sum=0;i<=n;i++)
    {
        cout<<sum<<" + "<<i<<" = "<<i+sum<<endl;
        sum=sum+i;
    }
    cout<< "sum of "<<n<<" is "<< sum <<endl;


    return 0;
}