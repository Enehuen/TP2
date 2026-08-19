/*
Ejercicio 2.2 – Numeros pares en rango
Mostrá todos los números pares entre dos valores ingresados.
-----------------
Ezequiel Nehuen
https://github.com/Enehuen
*/
#include <stdio.h>

int main()
{
    int inicio;
    int final;
    int contador = 0;
    int par = 0;
    printf("Numeros pares en rango\nIngrese el primer numero: ");
    scanf("%d",&inicio);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&final);
    contador = inicio;
    if (final == inicio)
    {
        contador = final;
    }
    else if(inicio < final)
    {
        while (contador < (final + 1))
        {
            
            if (inicio % 2 == 0)
            {
                printf("[%d]",inicio);
            }
            inicio++;
            contador++;
        }
    }   
    printf("\nFin del programa!\n");
    return 0;
}