#include<stdio.h>
 int main()
{
   char ch= 'A';
   int i = 11;
   float f = 3.14;
   double d = 9.8745;
   
   char *cp = &ch;
   int *ip = &i;
   float *fp =&f;
   double *dp= &d;

    void *vp =&ch;
    printf("value of ch : % c\n",ch);
    printf("address of ch : % p\n",&ch); 
    printf("value inside cp : % p\n",ch);
    printf("data refer by cp : % c\n",*cp);
    printf("size of ch : %d\n",sizeof(ch));
    printf("size of cp : %d\n",sizeof(cp));
    printf("size of i : %d\n",sizeof(i));
    printf("data refer by cp : %c\n",*(char *)vp);
    vp =&i;
    printf("data refer by ip : %d\n",*(int *)vp);
 
 

  return 0;
}