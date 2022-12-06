#include <iostream>
using namespace std;

int factorial (int l)
{
    int fact =1;
    while(l>0)
    {
        fact = fact * l;
        l=l-1;
    }
    return fact;
}

int nCr(int a, int b)
{
    int c = factorial(a);
    int d = factorial(b);
    int e = factorial(a-b);

    int answer = c / (d*e) ;
    cout<< answer;
    return answer;
}  

int main()
{
    int n,r;
    cin>>n>>r;
    nCr(n,r);

}