#include <stdio.h>

int stringLength(char inputString[]);

int main(int argc, char **argv)
{
	//printf("hello world\n");
    char name[]="Srikanth";
    
    printf("Length of string is %d\n",stringLength(name));
	return 0;
}

int stringLength(const char *firstCharacterptr){
    
    printf("%p\n",firstCharacterptr);
    const char *stringPtr=firstCharacterptr;
    
    while(*stringPtr){
        *stringPtr++;
        printf("%p\n",stringPtr);
    }
    
    return stringPtr-firstCharacterptr;
   
}