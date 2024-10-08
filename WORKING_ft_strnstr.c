#include <stddef.h>


/*char *ft_strnstr(const char *big, const char *little, size_t len);
{
while (big != '\0')
{
    if(*big = *little)
    {
        return big;
    }
    big ++;
}

}
*/

#include <stdio.h>
#include <string.h>

int main() {
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "o";
    char *ptr;

    ptr = strnstr(largestring, smallstring,2);

    if (ptr) {
        printf("Subcadena encontrada: %s\n", ptr);
    } else {
        printf("Subcadena no encontrada\n");
    }

    return 0;
}
