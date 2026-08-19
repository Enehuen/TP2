/*
Ejercicio 2.5 – Números Perfectos
Encontrá todos los números perfectos hasta N. Un número es perfecto si la suma de sus divisores  (excluyéndolo) es igual al número.
-----------------
Ezequiel Nehuen
https://github.com/Enehuen
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero;
    int total_divisor = 0; //Variable que va a sumar los divisores
    printf("Ingrese hasta que numero desea encontrar numeros perfectos: ");
    scanf(" %d",&numero);
    for (int i = 1; i < numero; i++) //numero que recorre desde 1 hasta el numero indicado
    {
        for (int j = 1; j < i; j++) //numero que recorre desde 1 hasta donde vaya 'i'
        {
            if (i % j == 0) //Si el modulo de 'j' e 'i' es igual a 0, son significa que es divisible
            {
                total_divisor = total_divisor + j; //Suma de los divisores 
                //printf("%d mod %d = %d \n",i,j,total_divisor);
            }
        }
        if (total_divisor == i)
        {
            printf("Numero perfecto [%d]\n",i); //Mostrar numero perfecto
        }
        total_divisor = 0; // resetear la suma de divisores
    }
    return 0;
}