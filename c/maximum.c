#include<stdio.h>

int main()
{
   int no1=0;
   int no2=0;

   printf("Enter two numbers\n");
   scanf("%d %d",&no1,&no2);
   
   if(no1>no2)
   {
     printf("%d is Maximum",no1);
   }
   else
   {
        printf("%d is Maximum",no2);
   }

    return 0;
}