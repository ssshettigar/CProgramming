#include <stdio.h>
#include <stdlib.h>

struct employee{
        char name[50];
        int hireDate;
        float salary;
};
    
    
int main(int argc, char **argv)
{
	//printf("hello world\n");
    
    
    struct employee newEmployee = {"Srikanth",10,1000.00};
    printf("Employee Name is %s, hiring date is %d and salary is %.2f\n", newEmployee.name, newEmployee.hireDate,newEmployee.salary);
    printf("Enter below information \n");
    printf("Enter Employee name: ");
    scanf("%s",newEmployee.name);
    printf("Enter Hire Date: ");
    scanf("%d",&newEmployee.hireDate);
    printf("Enter salary: ");
    scanf("%f",&newEmployee.salary);
    //newEmployee =(struct employee) {.name=employeeName, .hireDate=hiredDate, .salary=salary};
    printf("Update Employee Name is %s, hiring date is %d and salary is %f\n", newEmployee.name, newEmployee.hireDate,newEmployee.salary);
    return 0;
}
