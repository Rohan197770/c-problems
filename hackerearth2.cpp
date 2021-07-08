#include <iostream>
using namespace std;

int main()
{
   int l;
   cin>>l;
   int n;
   cin>>n;
   int w ,h;
   

   for (int i=1;i<=n;i++)
   {
       cin>>w>>h;
       if(w<l || h<l)
       {
           cout<<"UPLOAD ANOTHER"<<endl;
       }
       else if(w==h)
       {
           cout<<"ACCEPTED"<<endl;
       }
       else
       {
           cout<<"CROP IT"<<endl;
       }
       
   }
   return 0;
}