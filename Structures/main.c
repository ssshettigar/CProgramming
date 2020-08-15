#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main(int argc, char **argv)
{
	//printf("hello world\n");
    struct date today,*ptrDate;
    ptrDate=&today;
    ptrDate->day=1;
    ptrDate->month=2;
    (*ptrDate).year=2020;
    printf("Date is %i/%i/%i\n",ptrDate->day,ptrDate->month,(*ptrDate).year);
	return 0;
}
