/*
Ejercicio 2.3 – Validación de Entrada
Leé un número entre 1 y 100. Si está fuera de rango, pedí nuevamente hasta que sea válido.
-----------------
Ezequiel Nehuen
https://github.com/Enehuen
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero;
    bool bandera = true;
    printf("Validacion de entrada.\nIngrese un numero del 1 al 100: ");
    scanf(" %d", &numero);
    while (bandera == true)
    {
        if(numero < 1)
        {
            printf("Numero incorrecto!\nIngrese nuevamente un numero mayor a 0: ");
            scanf(" %d", &numero);
        }
        else if (numero > 100)
        {
            printf("Numero incorrecto!\nIngrese nuevamente un numero menor a 101: ");
            scanf(" %d", &numero);
        }
        
        else
        {
            printf("Numero ingresado correctamente!\n");
            bandera = false;
        }
        
    }
    
    return 0;
}