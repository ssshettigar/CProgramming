#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    //char name[]="Srikanth";
    //printf("Length of string is %d\n",strlen(name));
    //copying string value from one string to other
    //
    char temp[4];
    //printf("%s\n",strncpy(temp,name,sizeof(temp)-1));
    
    char FirstName[50];
    char LastName[50];
    strncpy(FirstName,"Srikanth",10);
    strncpy(LastName,"Shettigar",10);
    //printf("After concatenation of string %s\n",strncat(FirstName,LastName, 15));
    
    //printf("%d\n",strcmp("D","B"));
    
    //search character in string
    char str[]="My name is Srikanth";
    char searchcharacter ='z';
    char *searchedstring=NULL;
    searchedstring = strchr(str,searchcharacter);
    //printf("%s",searchedstring);//prints my name is "name is Srikanth"
    
    char searchstring[] ="z";
    char *output=NULL;
    output  = strstr(str,searchstring);
    //printf("%s",output);
    
    
    //tokens 
    char text[]= "Siri|Srikanth|Saiprasad";
    //char delimiter[]= "|";
    char *token=NULL;
    token=strtok(text,"|");
    /*
    while(token != NULL){
        printf("%s\n",token);
        token= strtok(NULL,"|");
    }
    */
    char stringtoint[] ="254";
    //printf("int is %d\n",atoi( stringtoint));
    //printf("Float is %e\n",atof( stringtoint));
    
    char strtext[30] = "20.30300 This is test";
   char *ptr;
   double ret;

   ret = strtod(strtext, &ptr);
   printf("The number(double) is %lf\n", ret);
   printf("String part is |%s|", ptr);
    
	return 0;
}
