#include <stdio.h>
#include <ctype.h>

int    ft_isprint(char* str)
{
    if (*str >= 32 && *str <= 126)
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

    if (isprint(c) == 0)
         printf("%c is not printable.", c);
    else
         printf("%c is printable.", c);

    return 0;
    */


    char c[] = "	";
    if (ft_isprint(c) == 0)
         printf("%s is not printable.", c);
    else
         printf("%s is printable.", c);

    return 0;
    }