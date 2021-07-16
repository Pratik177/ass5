#include<stdio.h>
int squ(int);
int main()
{
    int n,res;
    printf("enter a  number: ");
    scanf("%d",&n);
     res=squ(n);
    printf("the square of number is %d\n",res);
    return 0;

}

int squ(int a)
{
    int c;
    c=a*a;
       return c;
}
