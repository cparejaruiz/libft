int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
    char string[] = "Hola";
    printf("%s \n", string);
    int length = ft_strlen(string);
    printf("%d", length);
}
*/