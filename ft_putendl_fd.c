#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (!s)  
        return ;
    ft_putstr_fd(s,fd);
    ft_putchar_fd('\n',fd);
}

/*
int main() {
    char *string = "Anda, mira.";
    ft_putendl_fd(string, 1);  

    return 0;
}*/