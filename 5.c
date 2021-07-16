#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter a n number:");
    scanf("%d",&n);
    fact(n);
    return 0;
}
int fact(int n)
{   
    int i,fac=1;
    if (n<0)
    {
        printf("the factorial does not exists");
    }
     else
     {
         for (i=1;i<=n;i++)
         {
             fac *=i;
         }
         printf("the factorial is: %d\n",fac);
     }
}