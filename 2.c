#include<stdio.h>
int swap(int,int);
int main()
{
    int a,b;
    printf("enter a number a and b:");
    scanf("%d %d",&a,&b);
    printf("\nthe num before swaping a=%d and b=%d",a,b);
    swap(a,b);
    return 0;
}
  int swap(int x,int y)
 {
    int z;
    z=x;
    x=y;
    y=z;
    printf("\nthe num after swapping a=%d and b=%d\n",x,y);
}