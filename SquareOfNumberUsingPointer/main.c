#include <stdio.h>

int sqaureOfNumber(int *number);

int main(int argc, char **argv)
{
	//printf("hello world\n");
    
    int number=25;
    int temp=number;
    
    sqaureOfNumber(&number);
    printf("Square of %d is %d\n",temp,number);
	return 0;
}


int sqaureOfNumber(int *number){
    *number *=*number;
    return *number;
}