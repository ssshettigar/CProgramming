#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    FILE *fp=NULL;
    
    //**********************open file *********************
    fp=fopen("newfile.txt","r"); //read and write if file exists else create file and write contents to it.
    if(fp==NULL){
        perror("Error in opening file");
        return (-1);
    }
    /************** Writting a single character *************************/
    /*
    int ch;
    for(ch=30;ch <=100; ch++){
        fputc(ch,fp);
    }
    */
    /************** Writting string to File *************************/
    /*
    fputs("Hello World!",fp);
    fputs("This is Srikanth",fp);
    */
    //****** formatted string *********/
    //fprintf(fp,"%s %s %s %s %s %d\n","HI","This","is","my","world",2020);
    
    /***************** finding file size *************************/
    fseek(fp,0,SEEK_END);
    int len=ftell(fp);
    printf("File size in bytes is  %d",len);
    //************** close file *******************/
    fclose(fp);
    fp=NULL;
	return 0;
}
