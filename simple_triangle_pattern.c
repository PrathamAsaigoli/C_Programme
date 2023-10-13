#include<stdio.h>
int main()
{
    int n,p=1; /*p indicates the next value of the column variable j */
    printf("Enter the value of number of rows :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("*");
        }
        printf("\n");
        p++;
    }
    return 0;
}
