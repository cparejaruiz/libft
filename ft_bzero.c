#include <string.h>
#include <stdio.h>
 
void *ft_bzero(void *s, size_t len)
{
    unsigned char *ptr = s; // Convertir a puntero de tipo unsigned char
    while (len--) { // Iterar n veces
        *ptr++ = 0; // Asignar el valor c y mover el puntero
    }
    return s; // Devolver el puntero original
}


int main(void)
{
   char buffer[10]; // Declarar un buffer de 50 bytes

    // Inicializar el buffer a cero usando bzero
    bzero(buffer, sizeof(buffer));

    // Verificar el contenido del buffer
    printf("Contenido del buffer después de bzero: ");
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]); // Debería imprimir 0 para todos los elementos
    }
    printf("\n");


    char buffer2[10]; // Declarar un buffer de 50 bytes

    // Inicializar el buffer a cero usando bzero
    bzero(buffer2, sizeof(buffer2));

    // Verificar el contenido del buffer
    printf("Contenido del buffer después de ft_bzero: ");
    for (int j = 0; j < sizeof(buffer2); j++) {
        printf("%d ", buffer2[j]); // Debería imprimir 0 para todos los elementos
    }
    printf("\n");


}
 