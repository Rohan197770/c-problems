#include<iostream>
#include<string>
using namespace std;

bool check_palindrome(string s,int i,int n)
{
    if(i>=n/2)
    {
        return true;
    }
    if(s[i]!=s[n-i-1])
    {
        return false;
    }
    return check_palindrome(s,i+1,n);
}

int main()
{
    string s="madam";
    cout<<check_palindrome(s,0,5);
    return 0;
}