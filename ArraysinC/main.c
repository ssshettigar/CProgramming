#include <stdio.h>
#define MONTHS 12
int main(int argc, char **argv)
{
	//printf("hello world\n");
    //Displaying number of days in calendar months
    /*
    int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index =0;
    for (index=0; index <MONTHS; index++ ){
        printf("Number of days in month - %d is  %d\n",index+1, days[index]);
    }
    */
    int number[5]={1,2,3,4,5};
    
    int number1[5]={1,2,3};
    int number2[5]={[2]=5};
    int index =0;
    for(index=0;index<5;index++){
        printf("%d\n",number[index]);
    }
    
    for(index=0;index<5;index++){
        printf("%d\n",number1[index]);
    }
    for(index=0;index<5;index++){
        printf("%d\n",number2[index]);
    }
    
    //two dimesional arrays
	return 0;
}
