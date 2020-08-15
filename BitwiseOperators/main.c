#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    unsigned int a =64;
    unsigned int b=10;
    int result =0;
    result = a & b;
    printf("bitwise and is %d\n",result);
    result = a | b;
    printf("bitwise or is %d\n",result);
    result = ~b;
    printf("bitwise not is %d\n",result);
    result = b <<2;
    printf("bitwise shift left is %d\n",result);
     result = b >>2;
    printf("bitwise shift right is %d\n",result);
	return 0;
}
