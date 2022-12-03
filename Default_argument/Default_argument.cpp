#include <iostream>
using namespace std;

int max(int a, int b,int c=0 ) //initializing c=0 ki wajah se ab 2 aur 3 variables mei se max ye akela function bata skta hai...wrna pahle sirf 3variables ka max bata skta tha   
{
    int d= a>b && a>c ? a : b>c ? b : c ;
    return d;
}
int main()                     // max funtion is used for both 2 and 3 type variable now because of just intializing
{
    int e= max(10,12);
    int f= max(20,12,1);
    cout << e<< "\n";
    cout << f;
}