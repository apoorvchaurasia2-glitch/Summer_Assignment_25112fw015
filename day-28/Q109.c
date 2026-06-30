#include <stdio.h>

int main() {
    int choice;
    int books = 10;

    do {
        printf("\n1. Issue Book");
        printf("\n2. Return Book");
        printf("\n3. Available Books");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(books>0){
                    books--;
                    printf("Book Issued.\n");
                }
                else
                    printf("No Books Available.\n");
                break;

            case 2:
                books++;
                printf("Book Returned.\n");
                break;

            case 3:
                printf("Available Books = %d\n", books);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice!=4);

    return 0;
}