#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[5] = {'a','b','c','d','\0'};

    char Brr[5] = "abcd";

    char Crr[] = "abcd";

    printf("%s\n",Arr);
    printf("%s\n",Brr);
    printf("%s\n",Crr);

    printf("Size of Arr is %d\n",sizeof(Arr));

    printf("Length of Arr is %d\n",strlen(Arr));
    return 0;
}