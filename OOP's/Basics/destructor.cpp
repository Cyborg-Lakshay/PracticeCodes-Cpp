#include <iostream>
using namespace std;

class Hero
{
    public:

    Hero()
    {
        cout<<"Constructor called "<<endl;
    }

    ~Hero()
    {
        cout<<"Destructor called "<<endl;
    }

};

int main()
{
    //STATIC CALL
    Hero h1; //For static .... destructor is called automatically

    //DYNAMIC CALL
    Hero *b = new Hero; 
    delete b; //For dynamic .... destructor is called manuallly


}