
// A B C D
// A B C D
// A B C D

#include <iostream>
using namespace std;

int main()
{
    
    for(int i=1;i<5;i++)
    {
        char ch='A';
        for(int j=1;j<5;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}