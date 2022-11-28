// 1ST PATTERN 
// A 
// B B
// C C C
// D D D D

// AND

// 2ND PATTERN
// A 
// B C
// D E F
// G H I J



// 1ST PATTERN CODE 
#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<5;i++)
    {
        char ch = 'A'+i-1;
        for(int j=1;j<5;j++)
        {
            if(i>=j)
            {
                cout<<ch<<" ";
            }
            
        }
        cout<<endl;
    }
    
}


// 2ND PATTERN CODE
// int main()
// {
//     char ch = 'A';
//     for(int i=1;i<5;i++)
//     {
//         for(int j=1;j<5;j++)
//         {
//             if(i>=j)
//             {
//                 cout<<ch<<" ";
//                 ch++;
//             }
            
//         }
//         cout<<endl;
//     }
    
// }
