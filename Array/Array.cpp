#include <iostream>
using namespace std;

int main()
{   
    float A[10]={0,1.2f,2,3.6f,4.5f,5,6,7,8,9};

    for (auto i:A)  // using for each loop
    {
        cout<<i<<endl;
    }
    
    // for ( int i=0;i<10;i++)
    // {
    //     cout<<A[i]<<endl;
    // }

}   