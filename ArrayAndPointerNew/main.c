#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	//printf("hello world\n");
    char strings[]="A String";
    char *pstring= strings;
    //printf("Address of ptr is %p",pstring);
    int i;
    for(i=0; i< strlen(strings);i++){
        printf("Value of string = %c Address of strings[%d]=  %p  *(pstring+%d)= %c  pstring+%d=%p \n", strings[i],i,&strings[i], i, *(pstring+i), i, pstring+i);
    }
	return 0;
}
