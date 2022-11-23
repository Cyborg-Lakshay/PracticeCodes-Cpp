#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<" Enter all the three numbers to find the maximum ";
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
    cout<<"enter c ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<" a is the max ";
        }
        else{
            cout<<" c is the max ";
        }
    }
     else{
         if(b>c){
         cout<< " b is the max ";
         }
         else{
             cout<< " c is the max ";
         }
     }
    return 0;
}