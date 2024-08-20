#include <stdio.h>
#include <ctype.h>

int    ft_isdigit(char* str)
{
    if (*str >= '0' && *str <= '9')
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

    if (isdigit(c) == 0)
         printf("%c is not an digit.", c);
    else
         printf("%c is  an digit.", c);

    return 0;
    */


    char c[] = "0";
    if (ft_isdigit(c) == 0)
         printf("%s is not an digit.", c);
    else
         printf("%s is  an digit.", c);

    return 0;
    }