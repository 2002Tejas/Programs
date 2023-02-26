#include<stdio.h>
void fun()
{
	printf("Inside fun\n");
}

int main()
{
	fun();
	void(*fptr)();
	fptr=fun;
	fptr();


	return 0;

}