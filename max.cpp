#include<iostream>
using namespace std;

/*
    File compile -> g++ file_name.cpp -o output_file
    Run -> ./output_file

    g++ file_name.cpp -> a.out
    Run -> ./a.out


    https://www.geeksforgeeks.org/compiling-with-g-plus-plus/

*/

int main()
{

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<endl;
        }
         else
        {
             cout<<c<<endl;
        } 
    }
    else
    {
        if(b>c)
        {
            cout<<b<<endl;    
        }
        else
        {
            cout<<c<<endl;
        }

        
        
    }
    
     return 0;
}