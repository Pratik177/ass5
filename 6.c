#include<stdio.h>
int upper(char);
int main()
{
    char c,s;
    printf("enter a character:");
    scanf("%c",&c);
    upper(c);
   
    return 0; 
}
 int upper(char x)
 {    
     if(x>='a' && x<='z')
     { 
         x= x-32;   
          printf("the upper case is:%c\n",x);  
     }
    else 
    {
        printf("is not a lower case ");
    }
         return 0;
 }