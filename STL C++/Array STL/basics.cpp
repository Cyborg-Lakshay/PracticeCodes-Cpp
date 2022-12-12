#include <iostream>
#include <array>  // LIBRARY OF ARRAY IN STL
using namespace std;

int main()
{
    array<int,4> a = {1,2,3,4}; // DECLARING AND INITIALIZING AN ARRAY IN STL

//---------1----------
    int size = a.size(); 
    cout<<size<<endl;

    for(int i:a)
    {
        cout<<i<<" ";
    }

//--------2-----------
    cout<<endl<<"Element at INDEX 2 "<<a.at(2)<<endl;

//--------3-----------
    cout<<"Empty or NOT "<<a.empty()<<endl;

//--------4-----------
    cout<<"First elememt in an array "<<a.front()<<endl;
    cout<<"Last element in an array "<<a.back()<<endl;

}