#include<stdio.h>
int deci(int);
int main()
{
    int num;
    printf("enter a decimal number:");
    scanf("%d",&num);
    deci(num);
    return 0;
}
int deci(int numb)
{
    int rem,place=1,bin=0;
    while (numb !=0)
    {
    rem = numb % 2;
    numb = numb /2;
    bin =bin +(rem * place);
    place =place *10;
    }
    printf("thne binary of number is :%d\n",bin);
    
}