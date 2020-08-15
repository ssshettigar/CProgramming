#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    FILE *fp;
    char streamData[60];
    //open file 
    fp=fopen("newfile.txt","r");
    if(fp==NULL){
        perror("Error in opening the file");
        return (-1);
    }
    //reading content of file using streams
    if(fgets(streamData,60,fp)){
        printf("%s",streamData);
    }
    //close file
    fclose(fp);
    fp=NULL;
	return 0;
}
