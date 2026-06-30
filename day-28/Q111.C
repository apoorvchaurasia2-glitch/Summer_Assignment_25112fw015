#include <stdio.h>

int main() {
    int seats = 20;
    int book;

    printf("Available Seats = %d\n", seats);

    printf("Enter Seats to Book: ");
    scanf("%d",&book);

    if(book<=seats){
        seats-=book;
        printf("Booking Successful\n");
    }
    else{
        printf("Seats Not Available\n");
    }

    printf("Remaining Seats = %d\n",seats);

    return 0;
}