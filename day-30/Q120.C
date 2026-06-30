#include <stdio.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){

    struct Student s[3];

    for(int i=0;i<3;i++){

        printf("\nEnter Roll Name Marks: ");
        scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
    }

    printf("\n-----Student Details-----\n");

    for(int i=0;i<3;i++){

        printf("\nRoll : %d",s[i].roll);
        printf("\nName : %s",s[i].name);
        printf("\nMarks : %.2f\n",s[i].marks);
    }

    return 0;
}