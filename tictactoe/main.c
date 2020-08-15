#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    char numbers[] = {'1','2','3','4','5','6','7','8','9'};
    int i;
    int count=1;
    int len = strlen(numbers);
    for (i = 0; i < len-1; i++){
        printf("%c",numbers[i]);
        if(count!=3){
            printf("|");
        }
        else{
            count=0;
            printf("\n");
            printf("-----\n");
        }
        ++count;
    }
	return 0;
}










