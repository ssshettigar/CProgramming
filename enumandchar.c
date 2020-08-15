#include <stdio.h>
#include <stdbool.h> 

int main(){
  enum gender {male, female} ;
  enum gender mygender = male ;
  enum gender anothergender = female ;
  bool istrue= (mygender != anothergender);
  printf("%d\n", istrue);
  char singlechar='T';
  char newlinechar='\n';
  printf("%c", singlechar);
  printf("%c", newlinechar);
  return 0;
}