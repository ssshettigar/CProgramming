#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    int primes[50]={0};
    primes[0]=2;
    primes[1]=3;
    int primeIndex=2;
    int index;
    bool isPrime=false;
    int counter;
    for(index=5;  index<=100  ;index=index+2){
        isPrime=true;
        
        for(counter=1; isPrime && index/primes[counter] >=primes[counter]; ++counter){
            if(index % primes[counter] ==0){
                isPrime=false;
            }
        }
        if(isPrime==true){
            primes[primeIndex]=index;
            ++primeIndex;
        }
    }
    for(counter=0;counter < primeIndex;++counter ){
        printf("%d\n",primes[counter]);
    }
    
	return 0;
}
