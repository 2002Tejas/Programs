#include<stdio.h>

struct student
{
   int marks;
   int age;
   char Division;
};

int main()
{  
  struct student obj;    //9 byte
  struct student *ptr = NULL;    //8 byte
  //struct student *ptr = &obj;
  ptr = &obj;

  //Indirect Accessing operator
  ptr->marks = 90;
  ptr->age = 21;
  ptr->Division='B';
  
  return 0;

}