#include "libft.h"

int    ft_isalnum(char* str)
{
    if (((*str >= 'A') && (*str <= 'Z') )|| ((*str >= 'a') && (*str <= 'z') )|| ((*str >= '0') && (*str <= '9')))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*

int main(void)
{
    char c[] = "20";
    if (ft_isalnum(c) == 0)
         printf("%s is not alphanumeric.", c);
    else
         printf("%s is alphanumeric.", c);

    return 0;
}
    */