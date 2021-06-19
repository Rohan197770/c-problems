// checking so
#include <iostream>
using namespace std;

void inc(int n)
{
    if(n==0)
    {
        return;
    }
    cout<< n<<endl;
    inc(n-1);
}

int main()
{
    int n;
    cin>>n;

    inc(n);
}