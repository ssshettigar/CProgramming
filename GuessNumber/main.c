#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//printf("hello world\n");
    
    int guessCount=1;
    int guessedNumber=0;
    
    //generate random library
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber=rand()%21;
    int maxGuessCount=5;
    int lowerLimit=0;
     int upperLimit=20;
    //printf("%d",rand()%21);
    
    while(guessCount <=5){
        printf("Enter a Number   between %d and %d\n", lowerLimit, upperLimit);
        scanf("%d",&guessedNumber);
        if((int)guessedNumber && guessedNumber >=0 &&  guessedNumber <=20){
            //printf("Number  %d  is  between 0 and 20", guessedNumber);
            guessCount++;
            if(guessedNumber < randomNumber){
                printf("Number Guessed - %d is less than the actual number\n", guessedNumber);
                //++guessCount;
                if(guessCount >5){
                    printf("Exceeded maximum guess limit - %d\n",maxGuessCount);
                    break;
                }
            }
            else if(guessedNumber > randomNumber){
                printf("Number Guessed - %d is greater than the actual number\n", guessedNumber);
                //++guessCount;
                if(guessCount >5){
                    printf("Exceeded maximum guess limit - %d\n",maxGuessCount);
                    break;
                }
            }
            else{
                printf("Congratulation! Your Guess - %d matches  the actual number - %d \n", guessedNumber,randomNumber);
                break;
            }
        }
        else{
            printf("Number  %d  is not between 0 and 20\n", guessedNumber);
            guessCount++;
            if(guessCount >5){
                printf("Exceeded maximum guess limit - %d\n",maxGuessCount);
                break;
            }
        }
    }
	return 0;
}
