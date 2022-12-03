#include <iostream>
using namespace std;

int main()
{
    int *p=new int[10];

    delete[] p;
    p=new int[20];

    return 0;

}