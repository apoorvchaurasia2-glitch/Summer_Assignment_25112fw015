#include <stdio.h>

int main()
{

    int n,m , i,j  ;

    printf("enter a first number ");
    scanf("%d" , &n);

    printf("enter a second number ");
    scanf("%d" , &m);

   

    for(i=n;i<=m;i++)
    {
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        break;
    {
        printf("%d " , i );
        break;
    }
}
    }
return 0;
}