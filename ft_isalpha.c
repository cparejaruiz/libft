#include "libft.h"

int    ft_isalpha(char* str)
{
    if (((*str >= 'A') && (*str <= 'Z')) || ((*str >= 'a') && (*str <= 'z')))
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
    char c[] = "wss";
    if (ft_isalpha(c) == 0)
         printf("%s is not an alphabet.", c);
    else
         printf("%s is an alphabet.", c);

    return 0;
}
*/