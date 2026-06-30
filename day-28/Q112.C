#include <stdio.h>

int main() {
    char name[50];
    char phone[15];

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Phone Number: ");
    scanf("%s",phone);

    printf("\nSaved Contact\n");
    printf("Name : %s\n",name);
    printf("Phone : %s\n",phone);

    return 0;
}