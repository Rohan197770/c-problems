#include<iostream>
using namespace std;

int main()
{
    int marks1,marks2;
    int percentage;
    cout<<"Enter your 1st marks";
    cin>>marks1;

    cout<<"Enter your 2nd marks";
    cin>>marks2;
    percentage==((marks1+marks2)/200)*100;
    
    if(percentage>=40)
    {
        cout<<"You pass this exam";
    }
    else
    {
        cout<<"You failed this exam";
    }

    return 0;
    
    
}