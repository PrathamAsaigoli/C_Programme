#include<stdio.h>
int main()
{
   
    float units, amount;
    printf("*****************************************\n\n");
    printf("    Enter the number of units\n\n");
    printf("*****************************************\n");
    scanf("%f",&units);
    if (units==0)
    {
        amount=100;
    }
    
    if(units <= 200)
    {
        amount=100+0.8*units;
    }
    else if(units >= 200 && units <= 300)
    {
        amount=100+200*0.8+(units-200)*0.9;
    }
  
   else
    {
        amount=100+300*1.7+(units-300)*1;
    }
     printf("*****************************************\n\n");
    printf("    Your bill is \n\n");
    printf("*****************************************\n");
    printf("%f",amount);
}
