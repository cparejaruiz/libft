#include "libft.h"

int    ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
  return c;
}

/*
int main(void)
{

    int c =  'Z';
    int newChar = ft_toupper(c);
     write(1,&c,1);
     write(1,"\n",1);
     write(1,&newChar,1);
     write(1,"\n",1);


    return 0;
    }*/