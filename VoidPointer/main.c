#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    int num=10;
    float number=220.00;
    char oneLetter='F';
    
    void *vptr;
    vptr=&num;
    printf("Integer %d\n",*(int *)vptr);
    vptr=&number;
    printf("Float %.2f\n",*(float *)vptr);
    vptr=&oneLetter;
    printf("%c\n",*(char *)vptr);
	return 0;
}
