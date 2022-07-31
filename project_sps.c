#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int result(char ch,char uh)
{

    if(ch==uh)
    {
       return 0;
    }
    if(ch=='s',uh=='p')
    {
        return 1;
    }
    else if(ch=='p',uh=='s')
    {
         return -1;
    }

    if(ch=='p',uh=='e')
    {
        return 1;
    }
    else if(ch=='e',uh=='p')
    {
         return -1;
    }

    if(ch=='e',uh=='s')
    {
        return 1;
    }
    else if(ch=='s',uh=='e')
    {
         return -1;
    }
    
}



int main()
{
    int number;
    srand(time(0));
    number= rand()%100+1;
    char ch;
    if(number<33)
    {
        ch='s';
    }
   else if(number>33 && number<66)
   {
       ch='p';
   }
   else
   {
       ch='e';
   }
   char uh;
   printf("Enter 's' for STONE 'p' for PAPER 'e' for SEAZER\n");
   scanf("%c",&uh);

   int n=result(ch,uh);
   printf("you choose %c and computer choose %c ",uh,ch);

   if(n==0)
   {
       printf("DRAW!!");

   }
   else if(n==1)
   {
       printf("YOU WON");
   }
   else if(n==-1)
   {
       printf("YOU LOSE!!");
   }
   
return 0;

}