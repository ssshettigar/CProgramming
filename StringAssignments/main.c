#include <stdio.h>
#include <stdbool.h>
//function prototype
int stringLength(char *text);
void stringCompare(char *text1, char * text2);

int main(int argc, char **argv)
{
	//printf("hello world\n");
    
    //character length
    /*
    char text[]="";
    printf("Enter text here: ");
    scanf("%s",text);
    */
    
    //printf("%s",text);
    //int characterCount=0;
    //characterCount= stringLength(text);
    //printf("Word Length without using strlen function is %d\n",characterCount);
    
    //string compare
    
    char text1[100];
    
    printf("Enter first text here: ");
    scanf("%s",text1);
    char text2[100];
    printf("Enter second text here: ");
    scanf("%s",text2); 
    
    //compare each text
    stringCompare(text1,text2);
    
    
    return 0;
}
void stringCompare(char *text1, char * text2){
    if(stringLength(text1)== stringLength(text2)){
        int counter=0;
        bool isEqual=false;
        while(text1[counter]!='\0' && text2[counter]!='\0' ){
            //characters are equal
            if(text1[counter] == text2[counter]){
                
                isEqual= true;
            }
            else{
                isEqual= false;
                break;
            }
            ++counter;
        }
        if(isEqual == true){
                printf("Text 1 and text 2 are same");
            }
            else{
                printf("Text 1 and text 2 are not same");
            }
    }
    else{
        printf("Text 1 and text 2 are not having same length");
    }
}

int stringLength(char *text){
    int counter=0;
    int characterCount=0;
    while(text[counter]!='\0'){
        ++characterCount;
        ++counter;
    }
    return characterCount;
}
