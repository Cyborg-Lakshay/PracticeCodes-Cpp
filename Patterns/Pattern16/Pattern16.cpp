
//       1 
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    
    for(int i=1;i<5;i++)
    {
        int count =1;
        int count1=i;
        for(int j=1;j<8;j++)
        {
            if(j<4)
            {

            if(i+j>=5)
            {
                cout<<count<<" ";
                count++;
            }
            else
            {
                cout<<" "<<" ";
            }

            }

            if(j>=4)
            {
                if(j-i<=3)
                {
                    cout<<count1<<" ";
                    count1--;
                }
                else if(i>j)
                {
                    cout<<" "<<" ";
                }
            } 
        }
        cout<<endl;
    }

}
