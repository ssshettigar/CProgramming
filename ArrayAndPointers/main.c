#include <stdio.h>

int ArraySum(int array[], int count);

int main(int argc, char **argv)
{
	//printf("hello world\n");
    int values[]={1,2,3,4,5,6,7,8,9,10};
    int count=10;
    
    printf("Sum of array element is %d\n", ArraySum(values,count));
	return 0;
}

// using array
int ArraySum(int array[], int count){
    int * const ArrayEnd=array+ count;
    int sum=0, *ptr;
    for(ptr=array ;ptr < ArrayEnd; ptr++ ){
        sum+=*ptr;
    }
    return sum;
}


//passing pointer
int ArraySum(int *array, int count){
    int * const ArrayEnd=array+ count;
    int sum=0;
    for( ;array < ArrayEnd; array++ ){
        sum+=*array;
    }
    return sum;
}