#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{  
    if((ino % 2)==0)
   {
     return true;
   }
   else
  {
    return false;
  }   
    
}
int main()
{
   int iValue = 0;		
   printf("Enter one number\n");
   scanf("%d",&iValue);
   CheckEvent(iValue);
   bRet = CheckEven(iValue);
   if(bRet==true)
   { 
       printf("it is even number");
     }
    else
    {
          printf("it is odd number");
     }
   return 0;

}