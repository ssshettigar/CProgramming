#include <stdio.h>

int main(int argc, char **argv)
{
    int workinghours=0;
    int overtimeHours=0;
    int regular_week_work_hours=40;
	printf("Enter the number of working hours: ");
    scanf("%d",&workinghours);
    double first_taxrate=0.15;
    double second_taxrate=0.20;
    double third_taxrate=0.25;
    double basic_Pay=12.00;
    double overtime_Pay=18.00;
    double totaltax=0.00;
    double firstlimit=300;
    double secondlimit=150;
    double thirdlimit=firstlimit+secondlimit;
    double totalsalary=0.00;
    
    //check for overtime
    if(workinghours > regular_week_work_hours){
        overtimeHours=workinghours-regular_week_work_hours;
    }
    //total salary
    if(workinghours > 40){
        totalsalary=regular_week_work_hours* basic_Pay+ overtimeHours*overtime_Pay;
    }
    else{
        totalsalary=workinghours* basic_Pay;
    }
    
    //individual tax
    //first tax
    if(totalsalary <=firstlimit){
        totaltax=totalsalary* first_taxrate;
    }
    //second tax
    if(totalsalary >=firstlimit && totalsalary <=(firstlimit+secondlimit)){
        totaltax+=((firstlimit)* first_taxrate  + (totalsalary-firstlimit)* second_taxrate) ;
    }
    //third tax
     if(totalsalary >thirdlimit){
        totaltax+=(firstlimit* first_taxrate  + secondlimit* second_taxrate + (totalsalary -(firstlimit + secondlimit) )* third_taxrate);
    }
    
    //total tax
    printf("Total Tax is %.2f\n",totaltax);
    //gross pay = total salary- total tax
    printf("Total Gross Pay is %.2f\n", totalsalary - totaltax);
	return 0;
}
