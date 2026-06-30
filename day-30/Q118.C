#include <stdio.h>

int main() {

    char book[3][30]={"C","C++","Java"};

    printf("Books Available\n");

    for(int i=0;i<3;i++)
        printf("%s\n",book[i]);

    return 0;
}