#include<stdio.h>
int prime(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int x)
{
    int i,count=0;
    for(i=1;i <= x ;i++)
    {
        if(x % i==0)
        {
          count ++;
        }
    }
         if (count==2)
        {
            printf("the %d is prime number\n",x);
        } 
        else{ 
            printf("the %d is not prime \n",x);
        }
        
    }
