#include<iostream>
using namespace std;

struct employee
{
    int eid;
    char favChar;
    float salary;
};


int main()
{
    struct employee rohan;

    rohan.eid=1;
    rohan.favChar='c';
    rohan.salary=120000000;

    cout<<rohan.eid<<endl;
    cout<<rohan.favChar<<endl;
    cout<<rohan.salary<<endl;

    return 0;
}