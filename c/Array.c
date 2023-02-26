#include<stdio.h>
int main()
{ 
  int Arr [] = {1,2,3,4,5};
  
printf(" Base Address of array is : %p\n", Arr);
  printf(" Base Address of array is : %p\n", &Arr);
  printf("size of  of array is : %d\n", sizeof(Arr));



  return 0;

}