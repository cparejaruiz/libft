#include <stdio.h>
#include <ctype.h>

int    ft_isalpha(char* str)
{
    if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main(void)
{
/*

    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c) == 0)
         printf("%c is not an alphabet.", c);
    else
         printf("%c is an alphabet.", c);

    return 0;
    */


    char c[] = "@";
    if (ft_isalpha(c) == 0)
         printf("%s is not an alphabet.", c);
    else
         printf("%s is an alphabet.", c);

    return 0;
    }