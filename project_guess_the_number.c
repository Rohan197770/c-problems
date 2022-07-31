#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("The number is %d",number);
     printf("Guess the number between 1 to 100\n");
    
    do
    {
       
        scanf("%d",&guess);

        if(number>guess)
        {
            printf("HINT: Higher number!\n");
        }
         if(number<guess)
        {
            printf("HINT: Lower number!\n");
        }
       if(number==guess && nguesses==1)
       {
           printf("OMG! You guess it in first try\n");
       }
       else if(number==guess)
       {
           printf("You guessed the number in %d try\n",nguesses);
       }
       nguesses++;
    } while (number!=guess);
    return 0;
}