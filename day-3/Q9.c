#include <stdio.h>

int main()
{

    int n , i  ;

    printf("enter a number ");
    scanf("%d" , &n);

    if(n==1)
    {
        printf("number is not  prime");
        return 0;

    }
    for(i=2;i<=n/2;i++)
    {

        if(n%i ==0)
    {
        printf("number is not prime");
        
    }
        else
    {
        printf("number is prime");
    
    }
    }
return 0;
}