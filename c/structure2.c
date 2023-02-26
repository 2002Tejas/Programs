#include<stdio.h>
struct student
{
   int marks;
   int age;
   char Division;
};
int main()
{  
  struct student Amit;
  struct student pooja;
  
  Amit.marks=90;
  Amit.age=23;
  Amit.Division='A';

  pooja.marks=98;
  pooja.age=21;
  pooja.Displacement='c';
   
   return 0;

}