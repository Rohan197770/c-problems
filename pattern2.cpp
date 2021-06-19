// rectangular method
#include<iostream>
using namespace std;
int main()
{
    int row,col,i,z;
    for(i=1;i<=row;i++)
    {
        for(z=1;z<=col;z++)
        {
            if(i==1 || i==row)
            {
                cout<<"*";
            }
            else if(z==1 || z==col)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}