#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
	FILE *fp=NULL;
    
    //**********************open file *********************
    fp=fopen("newfile.txt","r"); //read and write if file exists else create file and write contents to it.
    if(fp==NULL){
        perror("Error in opening file");
        return (-1);
    }
    //count number of lines in file
    /*
    int c,EOFCounter;
    EOFCounter=0;
    while((c=fgetc(fp))!=EOF){
        //printf("%c",c);
        if(c=='\n'){
            EOFCounter++;
        }
    }
    printf("Total number of lines in file is %d\n",EOFCounter);
    */
     //convert to uppecase and write to temp file
     int c;
     FILE *fpTemp=NULL;
     fpTemp=fopen("tempfile.txt","w+");
     if(fpTemp==NULL){
        perror("Error in opening  temp file");
        return (-1);
    }
    while((c=fgetc(fp))!=EOF){
        if(islower(c) >  0){
            c=c-32;
        }
        fputc(c,fpTemp);
     }
    //************** close file *******************/
    fclose(fp);
    fp=NULL;
    //***********close temp file *******************
    fclose(fpTemp);
    fpTemp=NULL;
    //remove newfile.txt
    remove("newfile.txt");
    //rename file from temp to existing file
    rename("tempfile.txt","newfile.txt");
    //remove temp file
    //remove("tempfile.txt");
    
	return 0;
}
