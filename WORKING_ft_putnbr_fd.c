#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    int i = 0;
    
    while(s[i]!='\0')
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }
}

int main() {
    ft_putstr_fd("Anda, mira.\n", 1);  

    return 0;
}