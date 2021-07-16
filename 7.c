#include<stdio.h>
int rev(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    rev(n);
    return 0;
}
int rev(int x)
{
    int rem,revn=0;
    while(x!=0)
    {
        rem= x % 10;
        revn= revn *10 + rem;
        x= x / 10;
    }
    printf("the reverse number is :%d",revn);
}
