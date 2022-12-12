#include <iostream>
#include <vector>
using namespace std;

int main()
{

// ------1--------
    vector<int> v; // INTIALIZING VECTOR

    vector<int> a(4,1);

// -----2---------    
    vector<int> last(a); // COPYING VECTOR a TO VECTOR last

// -----3--------- 
    for (int i:last) // WAY TO PRINT ALL THE ELEMENTS IN AN VECTOR
    {
        cout<<i<<" ";
    }

    cout<<endl;

    for(int i:a)
    {
        cout<<i<<" ";
    }

    cout<<endl;

// -----4---------
    // THEIR IS DIFF BTW CAPACITY AND SIZE 
    cout<<"Before "<<endl;
    cout<<" Capacity --> "<<v.capacity()<<endl;

    cout<<"After "<<endl;
    v.push_back(1); // INCREASES THE CAPACITY FROM 0 TO 1

    cout<<"Capacity -->"<<v.capacity()<<endl;

    v.push_back(5); // INCREASES THE CAPACITY FROM 1 TO 2

    cout<<"Capacity -->"<<v.capacity()<<endl;
    
    v.push_back(7); // INCREASES THE CAPACITY BY FROM 2 TO 4 (DOUBLE KRDEGA VECTOR)

    cout<<"Capacity -->"<<v.capacity()<<endl;

    cout<<"Size -->"<<v.size()<<endl; // SIZE WILL TELL HOW MANY ELEMENTS ARE THERE AND CAPACITY WILL TELL THE SPACE AVAILABLE

// -----5---------
    cout<<"Element at 0 index is "<<v.at(0)<<endl;
    cout<<"Element at 1 index is "<<v.at(1)<<endl;
    cout<<"Element at 2 index is "<<v.at(2)<<endl;

// -----6---------
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

// -----7---------
    cout<<"Before pop "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back(); // REMOVES ELEMENT FROM THE LAST

    cout<<"After pop "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    v.clear();
    cout<<"Size -->"<<v.size()<<endl;


}