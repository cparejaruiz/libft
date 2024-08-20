
#include <stdio.h> 

int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
	}
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * sign);
}

int	main(void)
{
	int	numero;

	numero = ft_atoi("---+--+1234ab567");
	printf("numero: %d \n", numero);
}