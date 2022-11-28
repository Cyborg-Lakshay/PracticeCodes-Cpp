#include <iostream>
using namespace std;

int main()
{
    int A[10],i=0,n=10,Key;
    cout <<"Enter the numbers in the Array ";

    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }   
    cout<<"Enter the key ";
    cin>>Key;
    
    for(i=0;i<n;i++)
    {
        if(Key==A[i])
        {
            cout<<"Key found at "<<i;
            return 0;
        }
    }
    cout<<"Key not found";
    return 0;
}


// SAME CODE FOR PRACTISE 
// #include <iostream>  
// using namespace std;

// int main()
// {
//     int A[10],i=0,n=10,Key;
//     cout<<"Enter the elements to include in Array ";
    
//     for(i=0;i<n;i++)
//     {
//         cin>>A[i];
//     }

//     cout<<"Enter the Key";
//     cin>>Key;

//     for(i=0;i<n;i++)
//     {
//         if(Key==A[i])
//         {
//             cout<<"Key found at "<<i;
//             return 0;
//         }
//     }
//     cout<<"Key not found";
//     return 0;
// }   