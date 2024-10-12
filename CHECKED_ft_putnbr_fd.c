#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n==0)
    {
        write(fd, "0", 1);
    }
    else if(n == -2147483648)
    {
        write(fd, "-2147483648", 11);
    }
    
    else if (n<0)
    {
        write(fd, "-", 1);
        n = -n ;
    }
       if (n >= 10)
        ft_putnbr_fd(n / 10, fd);  // Llamada recursiva con n / 10

    // Ahora imprimimos el último dígito
    char num = n % 10 + '0';  // Convertir el último dígito a carácter
    write(fd, &num, 1);       // Imprimir el dígito
}

    

int main(void) {
    ft_putnbr_fd(12, 1);  

    return 0;
}