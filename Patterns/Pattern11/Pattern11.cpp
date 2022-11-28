
// A 
// B C 
// C D E 
// D E F G 

#include <iostream>
using namespace std;

int main()
{
    for(int i = 1;i<5;i++)
    {
        char ch = 'A'+i-1;
        for(int j = 1;j<5;j++)
        {
            if(i>=j)
            {
                cout<<ch<<" ";
                ch++;
            }
        }
        cout<<endl;
    }
}