// caluculating n raised to power p in recursive method
#include <iostream>
using namespace std;

int power(int n, int p)
{   
    if (p==0)
    {
        return 1;
    }
    int prepower = power(n ,(p-1) ); // calling the same function
    return  n*prepower ;
}

int main()
{
    int n,p;
    cin>>n>>p;

    cout<<power(n,p)<<endl;

    return 0;
}