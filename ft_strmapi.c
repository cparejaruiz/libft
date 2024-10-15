#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len = ft_strlen(s);
    char *string = (char *) malloc ((len +1) * sizeof(char));
    if (!string)
    {
        return NULL;
    }
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        string[j] = f(i,s[i]);
        i++;
        j++;
    }
    string[j] = '\0';
    return string;
}