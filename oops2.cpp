#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender;

   void printinfo()
   {
       cout<<"name =";
       cout<<name;
       cout<<"age =";
       cout<<age;
       cout<<"gender =";
       cout<<gender;
   }
    
};

int main()
{
    student arr[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Name =";
        cin>>arr[i].name;
        cout<<"age =";
        cin>>arr[i].age;
        cout<<"gender = ";
        cin>>arr[i].gender;

    }

    for(int i=0;i<3;i++)
    {
        arr[i].printinfo();
    }
    return 0;
}

