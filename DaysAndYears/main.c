#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    double number_Of_Minutes_in_A_Year= 525600;
    double number_Of_Minutes_in_A_Day= 1440;
    double calculated_number_of_days;
    double calculated_number_of_years;
    
    int minutes=0;
    printf("Enter minutes to calculate days and years: ");

    scanf("%d",&minutes);
   
    //printf("%d",minutes);
    calculated_number_of_days=(minutes/number_Of_Minutes_in_A_Day);
    calculated_number_of_years=(minutes/number_Of_Minutes_in_A_Year);
    printf("Number of Days is %.f\n",calculated_number_of_days);
    printf("Number of Years is %.f\n",calculated_number_of_years);
    
     return 0;
}
