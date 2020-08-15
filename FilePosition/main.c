#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    FILE *fp=NULL;
    
    //**********************open file *********************
    fp=fopen("newfile_position.txt","w+"); //read and write if file exists else create file and write contents to it.
    if(fp==NULL){
        perror("Error in opening file");
        return (-1);
    }
    /*
    fputs("This is Srikanth",fp); //writes to file
    fseek(fp,7,SEEK_SET);
    //starts putting "Hey there!" text at 7th position in the text.
    fputs("Hey there!",fp);
    int position= ftell(fp);
    printf("%d",position);
    */
    fpos_t position;
    fgetpos(fp,&position);
    fputs("Hello World!",fp);
    fsetpos(fp,&position);
    fputs("This will override previous text",fp);
    //************** close file *******************/
    fclose(fp);
    fp=NULL;
    
	return 0;
}
