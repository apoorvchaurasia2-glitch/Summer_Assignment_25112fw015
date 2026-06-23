#include <stdio.h>

int main()
{
    int n ,r, mult = 1 ;

    printf("enter a number ");
    scanf("%d" , &n);

    while (n!=0)
{
    r=n%10;
    mult=mult*r;
   n=n/10;
   
}
    printf("the mult of digit is %d" , mult );
return 0;

}