#include<stdio.h>
extern int Addition(int no1,int no2);

int main()
{
    int i=10;
    int j=11;
    int  res=0;
    res=Addition(i,j);


    printf("Addition is:%d ",res);
    return 0;
}