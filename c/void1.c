#include<stdio.h>
 int main()
{
	int i = 12;
      char ch = 'a';
	float f = 12.34;
      
	void *vp =&i;
	printf("value of i is :%d",*(int*)vp);

}