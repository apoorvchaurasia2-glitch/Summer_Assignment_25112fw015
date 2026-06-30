#include <stdio.h>

int main() {

    int a[100],n,i,sum=0;

    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter Elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nSum = ");

    for(i=0;i<n;i++)
        sum+=a[i];

    printf("%d",sum);

    return 0;
}