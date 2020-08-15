#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    FILE *fp;
    int c;
    
    fp=fopen("newfile.txt","r"); 
    //r -read 
    //w - only write if file exists else create a new file then write
    //a - append to existing text
    if(fp!=NULL){
        while((c=fgetc(fp))!=EOF){
            printf("%c",c);
        }
    }
    else{
        perror("Error in opening file");
        return (-1);
    }
	return 0;
}
