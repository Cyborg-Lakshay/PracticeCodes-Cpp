#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Multiplication table of ";
    cin>>n;

    // using do-while loop
    i=1;
    do
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
    while(i<11);


    // using while loop
    // i=1;
    // while(i<11)
    // {
    //    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    //    i++;
    // }

    // using for loop
    // for(i=1;i<11;i++)
    // {
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    // }

    return 0;


}
