//form the biggest form of the numeric string 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="456783";

    sort(s.begin(),s.end(), greater<int>());

    cout<<s<<endl;

    return 0;
}