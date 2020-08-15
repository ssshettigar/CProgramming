#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    enum weekdays {Mon,Tue,Wed,Thur,Fri,Sat,Sun};
    enum weekdays today=Fri;
    switch(today){
        case Mon: 
                    printf("%s\n","Today is Monday");
                    break;
        case Tue: 
                    printf("%s\n","Today is Tuesday");
                    break;
        case Wed: 
                    printf("%s\n","Today is Wednesday");
                    break;
        case Thur: 
                    printf("%s\n","Today is Thursday");
                    break;
        case Fri: 
                    printf("%s\n","Today is Friday");
                    break;
        case Sat: 
                    printf("%s\n","Today is Saturday");
                    break;
        case Sun: 
                    printf("%s\n","Today is Sunday");
                    break;
        default: 
                    printf("%s\n","Invalid Day");
                    break;
    }
	return 0;
}
