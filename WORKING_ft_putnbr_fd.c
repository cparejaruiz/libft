#include "libft.h"

<<<<<<< HEAD
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
=======
void ft_putnbr_fd(int n, int fd)
{
    write(fd, &n, sizeof(n));
}

int main() {
    ft_putnbr_fd(8, 2);  
>>>>>>> dc3ec26 (update files)

    return 0;
}