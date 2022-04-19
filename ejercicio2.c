#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *TiposProductos[]={“Galletas”,”Snack”,”Cigarrillos”,”Caramelos”,”Bebidas”};
struct Producto {
int ProductoID; //Numerado en ciclo iterativo
int Cantidad; // entre 1 y 10
char *TipoProducto; // Algún valor del arreglo TiposProductos
float PrecioUnitario; // entre 10 - 100
};
struct Cliente {
int ClienteID; // Numerado en el ciclo iterativo
char *NombreCliente; // Ingresado por usuario
int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
Producto *Productos //El tamaño de este arreglo depende de la variable
// “CantidadProductosAPedir”
};

int main(int argc, char const *argv[])
{
    int cant_clientes;
    char *user_cliente[cant_clientes-1];
    printf("Cantidad de clientes a ingresar: ");
    scanf("%i", cant_clientes);
    if (cant_clientes>5){
        printf("La cantidad de clientes ingresadas no es valida \n");
        printf("Cantidad de clientes a ingresar: ");
        scanf("%i", cant_clientes);
    }

    for(int i=0; i<cant_clientes; i++){
        printf("Nombre del cliente (N°%i): ", i);
        gets(user_cliente);
        user_cliente[i] = (char*) malloc(100 * sizeof(char));

    }

    for(int i=0; i<5; i++)
    {
        printf("El cliente %s \n", user_cliente[i]);
        free(user_cliente[i]);
    }
    free(user_cliente);
    free(cant_clientes);

    return 0;
}