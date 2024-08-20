#include <stdio.h>
#include <ctype.h>

int    ft_isascii(char* str)
{
    if (*str >= 0 && *str <= 127)
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

    if (isascii(c) == 0)
         printf("%c is not an digit.", c);
    else
         printf("%c is  an digit.", c);

    return 0;
    */


    char c[] = "ÿ";
    if (ft_isascii(c) == 0)
         printf("%s is not ascii.", c);
    else
         printf("%s is ascii.", c);

    return 0;
    }