/*
Ejercicio 2.1 – Suma de N numeros
Leé un número N y calculá la suma de los primeros N números naturales.
-----------------
Ezequiel Nehuen
https://github.com/Enehuen
*/
#include <stdio.h>

int main()
{
    int numero;
    int resultado = 0;
    printf("Suma de numeros desde 0.\nElija el limite de la suma: ");
    scanf("%d",&numero);
    for (int i = 0; i < (numero + 1); i++)
    {
        resultado = resultado + i;
    }
    printf("El resultado de la suma desde 0 hasta [%d] es: %d\n",numero, resultado);
    return 0;
}