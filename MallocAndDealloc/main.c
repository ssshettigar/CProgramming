#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    //initial allocation
    char *ptr=NULL;
    ptr= (char*) malloc(15 * sizeof(char);
    strcpy(ptr,"Srikanth");
    printf("String=%s, Address=%p\n",ptr,ptr);
    //reallocation
    ptr= (char *) realloc(ptr,25 * sizeof(char));
    strcat(ptr,".com");
    printf("string=%s, Address =%p\n",ptr,ptr);
    free(ptr);
	return 0;
}
