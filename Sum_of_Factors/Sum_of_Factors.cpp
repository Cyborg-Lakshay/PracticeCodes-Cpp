#include <iostream>
using namespace std;
int main()
{
    int i,sum,n;
    cout<<"Enter n ";
    cin>>n;

    for(i=1,sum=0;i<=n;i++)
    {
       if(n%i==0){
           cout<<i<<endl;
           sum=sum+i;


       }
    }
    cout<<" Sum of factors is "<<sum;
    


    return 0;
}