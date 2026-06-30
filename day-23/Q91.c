#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, temp;
    int count1[256] = {0}, count2[256] = {0};

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while(str1[len1] != '\0')
    {
        count1[(int)str1[len1]]++;
        len1++;
    }

    while(str2[len2] != '\0')
    {
        count2[(int)str2[len2]]++;
        len2++;
    }

    if(len1 != len2)
    {
        printf("Not Anagrams");
        return 0;
    }

    for(i = 0; i < 256; i++)
    {
        if(count1[i] != count2[i])
        {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Strings are Anagrams");

    return 0;
}