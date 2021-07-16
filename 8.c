#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b;
    printf("enter a two number:");
    scanf("%d%d",&a,&b);
    hcf(a,b);
    return 0;
}
int hcf(int x,int y)
{
    int a,b,t,HCF;
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b= a % b;
    }
    a=t;
    HCF=a;
    printf("the hcf is:%d",HCF);

}