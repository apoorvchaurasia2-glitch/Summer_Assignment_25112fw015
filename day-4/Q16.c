// not done by me i dont know how to find range of it sorry ):

#include <stdio.h>

int main()
{
    int start, end, num, temp, digit, sum;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for(num = start; num <= end; num++)
    {
        temp = num;
        sum = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}