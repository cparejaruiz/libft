#include "libft.h"

int    ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
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
    char c[] = "0";
    if (ft_isdigit(c) == 0)
         printf("%s is not an digit.", c);
    else
         printf("%s is  an digit.", c);

    return 0;
    }
*/
