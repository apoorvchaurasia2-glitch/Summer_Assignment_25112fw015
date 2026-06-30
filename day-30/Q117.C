#include <stdio.h>

int main() {

    int roll[5];
    char name[5][30];

    for(int i=0;i<5;i++){

        printf("Enter Roll and Name: ");
        scanf("%d%s",&roll[i],name[i]);
    }

    printf("\nStudent Records\n");

    for(int i=0;i<5;i++)
        printf("%d %s\n",roll[i],name[i]);

    return 0;
}