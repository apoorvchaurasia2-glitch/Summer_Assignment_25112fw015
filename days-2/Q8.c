#include <stdio.h>

int main()
{
    int n ,r, rev=0 , x ;

    printf("enter a number ");
    scanf("%d" , &n);
x = n;

    while (n!=0)
{
    r=n%10;
    rev = (rev*10)+r;
   n=n/10;
   

}
if(rev == x)
{
    printf("number is palindrome");
}

else{
    printf("number is noy palindrome");

}
}
