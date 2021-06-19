// floyds triangle
#include <iostream>
using namespace std;

int main()
{
   int n,i,j,count;
   cin>>n;

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
          cout<<count<<" ";
          count++;
       }
   }
   return 0;
}