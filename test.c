#include <stdio.h>

int main(){
  //printf("Hello World!");
  char str[100];
  int i;
  printf("Enter a number: ");
  scanf("%d %s", &i,str);
  printf("\n Number is %d \n", i);
  printf("\n String is %s \n", str);
  return 0;
}