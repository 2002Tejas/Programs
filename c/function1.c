#include<stdio.h>
 
 int multiplication(int value1,int value2)
{
	int Ans =0;
      Ans=value1*value2;
      return Ans;


}

int main() 
{
	int no1= 10;
	int no2= 11;
      int ret= 0;
	
	ret =multiplication(no1,no2);	
	printf("multiplication is:%d",ret);
	return 0;


}