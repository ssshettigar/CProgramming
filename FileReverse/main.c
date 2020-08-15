#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp=NULL;
    fp=fopen("newfile.txt","r"); //read and write if file exists else create file and write contents to it.
    if(fp==NULL){
        perror("Error in opening file");
        return (-1);
    }
    int end,start;
    start=0;
    fseek(fp,0,SEEK_END);
    end=ftell(fp);
    while(start < end){
        start++;
        fseek(fp,-start,SEEK_END); 
        printf("%c",fgetc(fp));
     }
     printf("\n");
    //************** close file *******************/
    fclose(fp);
    fp=NULL;
	return 0;
}
