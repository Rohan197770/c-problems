// find out wheather a given character is alphabate
#include <iostream>
using namespace std;

bool vote(int n)
{
    if(n>=18)
    {
        return true;
    }

    return false;
}
int main()
{
   int n;
   cout<<"Enter your age";
   cin>>n;
    if(vote(n)==true)
    {
    cout<<"Eligible for vote";
    }
    else
    {
        cout<<"Not eligible for voting";
    }
    
    return 0;

}
