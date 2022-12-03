#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[20]={"Hello world"};
    char r[30]={", spread love not hatred."};
    // 1st function to cal length of a string
    // cout<<strlen(s)<<endl;

    //2nd function for concatinating 2 string
    
    // strcat(destination,source)

    // cout<<strcat(s,r)<<endl;

    // cout<<strncat(s,r,13)<<endl; //int this we chose the length of the source we want add in destination 
    
    // 3rd function for coping string from source to destination
    // cout<<strcpy(s,r)<<endl; //ye destination wale string ki jagah pura source copy krdega

    // cout<<strncpy(s,r,13)<<endl;

    // 4th fuction to find 1st string containing in 2nd 
    char a[20]={"Programming"};
    char b[20]={"gram"};
    char c[20]={"m"};

    // cout<<strstr(a,b)<<endl;
    // cout<<strstr(a,c)<<endl;

    // 5th function 
    cout<<strchr(a,'r')<<endl; //it checks the letter from left side
    cout<<strrchr(a,'r')<<endl; //it checks from right side

    // 6th function used to compare strings
    strcmp //use if and else statements for comparision 
    // if str1=str2 --->0
    // if str1>str2 --->+ve value
    // if str1<str2 --->-ve value



    return 0;

}