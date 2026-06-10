#include <stdio.h>

int main()
{
    int n , count = 0 , i ;
printf("enter a number ");
    scanf("%d" , &n);
    
    while(n!=0)
    {

    n= n/10;

    count=count+1;
    }

    printf("counting is  %d" , count);
return 0;


}




