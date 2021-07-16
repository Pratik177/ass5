#include<stdio.h>
int hcf(int,int);
int upper(char);
int main()
{
    int a,b;
    char c,s;
    printf("enter a two number:"); scanf("%d%d",&a,&b);
    hcf(a,b);
    return 0;
}
int hcf(int x,int y)
{
    int a,b,t,HCF,LCM;
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b= a % b;
    }
    a=t;
    HCF=a;
    LCM=(x*y)/HCF;
    printf("the lcm  is:%d\n",LCM);
}
