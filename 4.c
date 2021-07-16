#include<stdio.h>
int positive(int);
int main()
{
    int n;
    printf("enter a n th term: ");
    scanf("%d",&n);
    positive(n);
    return 0;

}
int positive(int x)
{   
    int i,sum=0;
    for(i=1;i<=x;i++)
    {
        sum +=i;
    }
        printf("%d\n",sum);

}