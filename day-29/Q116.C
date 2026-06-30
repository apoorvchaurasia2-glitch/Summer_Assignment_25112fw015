#include <stdio.h>

int main() {

    char item[50];
    int quantity;

    printf("Enter Item Name: ");
    scanf("%s",item);

    printf("Enter Quantity: ");
    scanf("%d",&quantity);

    printf("\nInventory Details\n");
    printf("Item : %s\n",item);
    printf("Quantity : %d\n",quantity);

    return 0;
}