#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// CREATING CLASS WITH SOME PROPERTIES OF OBJECT 

class Hero
{
    // PROPERTIES OF THE OBJECT THAT WE WILL CREATE IN INT MAIN()

    private: //PROPERTIES UNDER PRIVATE IS ONLY ACCESSIBLE IN THE CLASS
    char level;
    int power;

    public: //PROPERTIES UNDER PUBLIC IS ACCESSIBLE OUTSIDE THE CLASS 
    int health;



    // TO ACCESS THE PRiVATE MEMBERS FROM CLASS IN MAIN FUNCTION USE GETTER/SETTER

    char getLevel()
    {
        return level;
    }

    int getPower()
    {
        return power;
    }

    void setLevel(char ch)
    {
        level = ch ;
    }

    void setPower(int p)
    {
        power = p ;
    }

};

int main()
{
     
    // OBJECT LAKSHAY IS CREATED OF CLASS HERO CONTAINING THE PROPERTIES OF NAME , HEALTH , LEVEL

    Hero lakshay;

    // STATIC ALLOCATION
    Hero a;
    a.health = 70;
    cout<<"Health of object a statically allocated --> "<<a.health<<endl;

    //DYNAMIC ALLOCATION 
    Hero *b = new Hero ;
    b->health = 90 ;
    b->setLevel('B');

    cout<<"Level of b is --> "<<b->getLevel()<<endl;
    cout<<"Health of object *b dynamically allocated --> "<<(*b).health<<endl;
                                // OR 
    cout<<"Health of object *b dynamically allocated --> "<<b->health<<endl;  

    //INITIALIZING THE PROPERTIES WITH SOME DATA
    lakshay.health = 80 ;  //public class members

    lakshay.setLevel('A') ; //private class members
    lakshay.setPower(90) ;

    cout<<"Size of Lakshay --> "<<sizeof(lakshay)<<endl;  // 8 (CHAR BYTES) + 4 (INT BYTES) = 12 (OBJECT LAKSHAY BYTES)

    //accessing the properties of health 
    cout<<"Health is --> "<<lakshay.health<<endl;
    
    cout<<"Level is --> "<<lakshay.getLevel()<<endl;
    cout<<"Power is --> "<<lakshay.getPower()<<endl;
}