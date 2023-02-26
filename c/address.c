#include<stdio.h>
 int main()
{
   char ch= 'a';
   int i = 11;
   float f = 3.14;
   double d = 9.8745;

    
  printf("size of each varible :\n");
  printf("size of character: %d\n",sizeof(ch));
  printf("size of integer: %d\n",sizeof(i));
  printf("size of float: %d\n",sizeof(f));
  printf("size of  double: %d\n",sizeof(d));
 printf("address of each varible :\n");
  
  printf("Addresss of  character: %p\n",&ch);

  printf("Addresss of  integer: %p\n",&i);
  printf("Addresss of  float: %p\n",&f);
  printf("Addresss of  double: %p\n",&d);

  return 0;
}