#include<iostream>

using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Enter the number ";
    cin>>n;
    
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==2*n){
        cout<<n<<" is a perfect number";
    }
    else{
         cout<<n<<" is not a perfect number";
    }

    return 0;
}