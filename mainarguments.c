#include <stdio.h>
#include <stdbool.h> 
//needed for bool data type
int main(int argc, char *argv[]){
   printf("number of arguments is %d\n", argc);
   printf("Argument 1 is %d\n", *argv[0]);
   printf("Argument 2 is %d\n", *argv[1]);
}