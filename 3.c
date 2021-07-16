#include<stdio.h>
int oddeven(int);
int main()
{
    int a;
    printf("enter a number a:=" );
    scanf("%d",&a);
    oddeven(a);
    return 0;
}
 int oddeven(int x)
 {
     if (x % 2 == 0)
     {
         printf("the number is even\n ");
     }
     else 
     {
         printf("the number is odd\n");
     }
 }