 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

int main(int argc, char **argv)
{
	//("hello world\n");
    char *stringInput=NULL;
    int stringLimit=0;
    printf("Enter a number of character in string:");
    scanf("%d",&stringLimit);
    stringInput= (char *)(malloc(stringLimit* sizeof(char)));
    if(stringInput!=NULL){
        printf("Enter a string:");
        scanf("%s",stringInput);
        printf("Entered string is %s\n",stringInput);
    }
    free(stringInput);
    stringInput=NULL;
    return 0;
}
