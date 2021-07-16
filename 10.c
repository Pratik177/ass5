#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
    int  a,b,res;
    printf("enter a two number :");
    scanf("%d%d",&a,&b);
    res=power(a,b);
    printf("the power of number is %d\n",res);
    return 0;
}
int power(int x , int y)
{
    int p=1,a,b;
    b=y;
    while(y!=0)
    {
        p=p*x;
        y=y-1;
    }
      return p;
}