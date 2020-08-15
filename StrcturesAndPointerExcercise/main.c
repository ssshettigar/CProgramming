#include <stdio.h>
#include <stdlib.h>

struct item{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readSturctItems(struct item *newItem){
    printf("Enter a item name:");
    scanf("%s",newItem->itemName);
    printf("Enter quantity:");
    scanf("%d",&newItem->quantity);
    printf("Enter price:");
    scanf("%f",&newItem->price); 
    newItem->amount = newItem->quantity * newItem->price;
}

void printSturctItems(struct item *newItem){
    printf("Name is %s\n",newItem->itemName);
    printf("Quantity is %d\n",newItem->quantity);
    printf("Price is %.2f\n",newItem->price);
    printf("Amount is %.2f\n",newItem->amount);
}
    
int main(int argc, char **argv)
{
	//printf("hello world\n");
    struct item newitem,*ptrnewItem;
    ptrnewItem=&newitem;
    ptrnewItem->itemName =(char *)malloc(30);
    readSturctItems(ptrnewItem);
    printSturctItems(ptrnewItem);
    //clean up memory when you do dynamic memory allocation
    free(ptrnewItem->itemName);
    ptrnewItem->itemName=NULL;
	return 0;
}
