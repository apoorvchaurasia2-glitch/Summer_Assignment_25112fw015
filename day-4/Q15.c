#include <stdio.h>

int main()
{
    int n ,r, arm=0  ;

    printf("enter a number ");
    scanf("%d" , &n);

    while (n!=0)
{
    r=n%10;
   arm = arm + r*r*r;
   n=n/10;

  

}
printf("the rev of digit is %d" , arm );
return 0;

}