
// A A A A 
// B B B B 
// C C C C 
// D D D D

#include <iostream>
using namespace std;

int main()
{
    
    for(int i=1;i<5;i++)
    {
        char ch = 'A'+i-1;
        for(int j=1;j<5;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}