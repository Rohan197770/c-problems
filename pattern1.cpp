//rectangle pattern
#include<iostream>
using namespace std;

int main()
{
    int row,col,i,z;
    cin>>row>>col;
    for(i=1;i<=row;i++)
    {
        for(z=1;z<=col;z++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
