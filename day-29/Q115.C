#include <stdio.h>
#include <string.h>

int main() {

    char str[100];

    printf("Enter String: ");
    scanf("%s",str);

    printf("Length = %lu\n",strlen(str));

    printf("Uppercase:\n");

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }

    printf("%s",str);

    return 0;
}