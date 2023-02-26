#include<stdio.h>
int Addition(int No1, int No2)
{
	int Ans=0;
	Ans = No1 + No2;
	return Ans;
 }
int main ()
{
	int value1 =10 ;
	int value2 =11 ;
	int ret = 0 ;
	ret = Addition(value1 , value2);
	printf("Addirion is :%d",ret);
	return 0;
}