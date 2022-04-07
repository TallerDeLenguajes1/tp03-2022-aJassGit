#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *buffer;
    char *nombre[5];

    buffer= (char *) malloc(100*sizeof(char));
    for(int i=0; i<5; i++)
    {
        printf("Ingresar un nombre: ");
        gets(buffer);
        nombre[i]= (char *) malloc(100*sizeof(char));
        strcpy(nombre[i], buffer);
    }
    for(int i=0; i<5; i++)
    {
        printf("El nombre %i es %s \n", i+1, nombre[i]);
        free(nombre[i]);
    }
    free(buffer);
    return 0;
}
