#include <iostream>
using namespace std;

class student
{
    public:
    string name; // attributes
    int age; // attributes
    bool gender;
};

int main()
{
    student a;
    a.name ="rohan";
    a.age =20;
    a.gender =1;

    cout<< a.name<<" "<<a.age<<" "<<a.gender;

    return 0;
}