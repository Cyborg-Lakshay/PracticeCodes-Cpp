#include <iostream>
using namespace std;

int main()
{
    //BY USING CIN.GET()
    char A[20];
    cout << "Enter your name ";
    cin.get(A,20);
    cout<<"Welcome "<<A<<endl;

    cin.ignore(); // this is very inportant to use if we use "cin.get()" otherwise it will not be able to take the 2nd input  

    char B[20];
    cout << "Enter your name ";
    cin.get(B,20);
    cout<<"Welcome "<<B<<endl;

    cin.ignore();

    // BY USING CIN.GETLINE()
    char C[20];
    cout << "Enter your name ";
    cin.getline(C,20);
    cout<<"Welcome "<<C<<endl;

    return 0;

}