#include <iostream>
using namespace std;

template<class T>
T max(T a,T b,T c)
{
    T d = a>b && a>c ? a: b>c ? b:c ;    
}
int main()
{
    cout<< max(12,280,650)<<endl;
    cout<<max(6.2f,6.8f,5.5f)<<endl;
    cout<< max(3.4,4.6,8.9)<<endl;
    return 0;
}

