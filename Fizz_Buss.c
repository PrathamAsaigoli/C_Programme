//Buss Fizz Game 
#include<stdio.h>
int main()
{
    int i ;
    for(i=1;i<=100;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("Fizz Buzz \n");
            continue;
        }


        else
        if(i%3==0)
        {
            printf("Buzz \n");
            continue;
        }

        else
        if(i%5==0)
        {
            printf("Fizz \n");
            continue;
        }

        else
        {
            printf("%d\n",i);
        }
        
    }

    return 0;
}