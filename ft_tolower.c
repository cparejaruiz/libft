#include "libft.h"


int    ft_toupper(int ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else
    {
        ch;
    }

    return ch;
}


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