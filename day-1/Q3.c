#include<stdio.h>

int main()
{
    int n , fact=1 , i ;

    printf("number entered is");
scanf("%d" , &n );

for(i=1;i<=n;i++)
fact=fact*i;

printf("factorial is  %d" , fact);

}