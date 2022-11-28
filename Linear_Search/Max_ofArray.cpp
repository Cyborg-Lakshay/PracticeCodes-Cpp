#include <iostream>
using namespace std;

int main()
{
    int A[] = {9,11,7,12,1,16};
    int max=A[1];
    for (int i=0;i<7;i++)
    {
        if ( A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<max;

    return 0;

}