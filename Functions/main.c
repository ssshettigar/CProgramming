#include <stdio.h>

// function prototypes
//void add();
int GreatestCommonDivisor(int number1, int number2);
//int GreatestDivisor(int number);
float AbsoluteValue(float number);

int main(int argc, char **argv)
{
	//printf("hello world\n");
    //add();
    // GCD calculation
    /*
    int n1, n2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    gcd= GreatestCommonDivisor(n1,n2);

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
    */
    float number;
    printf("Enter a number to find out the absoluet value: ");
    
    scanf("%f",&number);
    float absoluteval= AbsoluteValue(number);
    printf("Absoluet Value is %.f\n", absoluteval);
    return 0;
    
}

int GreatestCommonDivisor(int number1, int number2){
    int i,gcd;
    for(i=1; i <= number1 && i <= number2; ++i)
    {
        // Checks if i is factor of both integers
        if(number1%i==0 && number2%i==0)
            gcd = i;
    }
    return gcd;
}

float AbsoluteValue(float number){
    if(number < 0 ){
        return number*-1;
    }
    else if(number > 0){
        return number;
    }
    else{
        return 0;
    }
}

//definition of functions
/*void add(){
    printf("Sum is %d\n",0);
}
*/