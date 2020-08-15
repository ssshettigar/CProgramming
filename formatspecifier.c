#include <stdio.h>
#include <stdbool.h> 
//needed for bool data type
int main(){
  int num=10;
  float float_num=10.123499f;
  double double_num= 10.44e+11;
  bool boolvar= false;
  printf("int var is is %i\n",num);
  printf("float var is %f\n",float_num);
  printf("float var with two decimal place is %.2f\n",float_num);
  printf("Double var is %e\n",double_num);
  printf("Double var with a different format is %e\n",double_num);
  printf("bool value is %i\n",boolvar);
  return 0;
}