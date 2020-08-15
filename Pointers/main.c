#include <stdio.h>

int main(int argc, char **argv)
{
	
    /*
    int number=20;
    int *pnumber=NULL;
    printf("Address of number is %p\n",&number);
    printf("Output of number  is %d\n\n",number);
    
    pnumber=&number; //address of the number is assigned to pointer
    printf("Address of pnumber is %p\n",(void*)&pnumber); //address of pnumber 
    printf("Size of pnumber is %d\n",sizeof(pnumber)); //size of pnumber
    printf("Value of pnumber is %p\n",pnumber); //value of pnumber is address
    printf("Value of what pointer is pointing to %d\n",*pnumber);
    */
    
    /*
    int num =10;
    int*pnum =NULL; //initialized to NULL
    
    printf("Value of num is %d\n",num);
    printf("Address of num is %p\n",&num);
    pnum= &num;
    printf("Value of pnum is %p\n",pnum);
    printf("Address of pnum is %p\n",&pnum);
    printf("Value that pointer is pointing to %d\n",*pnum);
    */
    
    /*
    long num1=0L;
    long num2=0L;
    long *pnum=NULL;
    
    pnum=&num1;
    *pnum=2L;
    ++num2;
    num2+=*pnum;
    pnum=&num2;
    ++*pnum;
    
    printf("num1 = %ld , num2=%ld, *pnum= %ld, *pnum +num2= %ld ", num1,num2, *pnum, *pnum +num2);
    */
    
    /*
    int num =0;
    printf("Intial value of num is %d\n",num);
    int *pnum= NULL;
    pnum=&num;
    printf("Address of pnum is %p\n",pnum);
    *pnum=10;
    printf("Value of num is %d\n",num);
    ++*pnum;
    printf("Updated Vaue of num is %d\n",num);
    */
    /*
    //Constant Pointer - No Value Change
    int num=10;
    const int *pnum=&num;
    int num1=20;
    pnum=&num1;
    //**********assignment to pointer variable is not allowed**********
    //*pnum=20; // since num is a variable
    num=20;
    printf("Value of num is %d\n",num);
     printf("Address of num is %p\n",&num);
     printf("Value that pointer points to  is %d\n",*pnum);
      */
    //Constant Pointer - No Address Change
    /*
    int num=10;
    int *const pnum=&num;
    int num1=20;
    pnum=&num1; //address change is not allowed
    */
    
    // Constant Pointer - No value or address change
    /*
    int num=10;
    const int *const pnum = &num;
    int num1=20;
    //below are not allowed 
    pnum=&num1; //address change not allowed
    *pnum=30;// value change is not allowed
    */
	return 0;
}
