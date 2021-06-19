// exachange the value of both numbers
#include <iostream>
using namespace std;

void swap(int *a , int *b)
{
    int t;// call of refrence intead of calling values
    t=*a;
    *a=*b;
    *b=t;// int pointers

}// using pointers

int main()
{
    int a = 2;
    int b = 4;

    int *aptr=&a;
    int *bptr=&b;

    swap(aptr,bptr);

    cout<<a<<" "<<b<<endl;

    return 0;

}