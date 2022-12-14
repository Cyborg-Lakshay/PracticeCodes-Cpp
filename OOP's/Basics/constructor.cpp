#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

class Hero
{
    private:

    // char *name ;

    public :

    char *name ;

    int health ;

    char level;

    Hero()
    {
        cout<<"Constructor called  "<<endl;
        name = new char[100];
    }

    //PARAMETERIZED CONSTRUCTOR 
    Hero( int health )
    {
        cout<<"this -> "<<this<<endl;
        this->health = health;
    }

    Hero(int health,char level)
    {
        this->level = level;
        this->health = health;
    }

    void print()
    {
        cout<<endl;
        cout<<"{ Name ->" <<this->name<<" , ";
        cout<<"Health ->"<<this->health<<" , ";
        cout<<"Level ->"<<this->level<<" } ";
        
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

};

int main()
{
    //OBJECT CREATED STATICALLY
    Hero a; //calling constructor

    //OBJECT CREATED DYNAMICALLY
    Hero *b = new Hero ;

    //PARAMETERIZED CONSTRUCTOR TOPIC
    Hero ramesh(10);
    cout<<"Address of Ramesh --> "<<&ramesh<<endl;
    ramesh.print();
    cout<<endl;
    
    

    // COPY CONSTRUCTOR 
    Hero S(60,'A');
    S.print();

    Hero R(S);
    R.print();
    
    cout<<endl<<endl;

    //SHALLOW CONCEPT 
    Hero hero1;
    hero1.health = 85;
    hero1.level = 'B';
    char name[7] = "Ram";
    hero1.setName(name);

    hero1.print();


    //USE DEFAULT COPY CONSTRUCTOR
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0]='S';
    hero1.print();

    hero2.print();


}