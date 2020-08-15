#include <stdio.h>

void swap(int *x, int *y);

int main(int argc, char **argv)
{
	//printf("hello world\n");
    int x=100;
    int y=200;
    printf("Before swapping value of x is %d\n",x);
    printf("Before swapping value of y is %d\n",y);
    swap(&x,&y);
    
    printf("After swapping value of x is %d\n",x);
    printf("After swapping value of y is %d\n",y);
	return 0;
    
}


void swap(int *x, int *y){
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}