#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0 ;

    printf("Please enter file name you want to Open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to Open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully Open with FD %d\n",fd);
    }

    write(fd,"Marvellous",10);

    close(fd);

    return 0;
}