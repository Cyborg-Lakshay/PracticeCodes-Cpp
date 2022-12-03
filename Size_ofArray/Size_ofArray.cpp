#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an Array ";
    cin >> size;
    int A[size] ;

    cout<<sizeof A; //so it will give 40 as output cuz int takes 4 bytes, so 4*10=40
    return 0;

}