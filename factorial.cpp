// to find the factorial of the number
#include <iostream>
using namespace std;

int main()
{
    int n, factorial=1 ,i;
    cin>>n;

    if (n<0)
    {
        cout<<"Error";
    }
    else
    {
        for(int i= 1; i<=n;i++)
        {
            factorial = factorial*i;
        }
        cout<< factorial;
    }

    return 0;
    
    
    
}