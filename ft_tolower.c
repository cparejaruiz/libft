#include "libft.h"


int    ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    return c;
}

/*
int main(void)
{

    int c =  '2';
    int newChar = ft_toupper(c);
     write(1,&c,1);
     write(1,"\n",1);
     write(1,&newChar,1);
     write(1,"\n",1);


    return 0;
    }

    */