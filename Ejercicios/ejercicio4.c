/*
Ejercicio 2.4 – Secuencia de Fibonacci
Generá los primeros N números de Fibonacci de forma iterativa. Los números de la secuencia comienzan en t0 = 0 y t1 = 1 y los terminos siguientes son la suma de los dos anteriores, por lo que t2 = t1 + t0..
-----------------
Ezequiel Nehuen
https://github.com/Enehuen
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero1 = 0;
    int numero2 = 1;
    int temp;
    int ingreso;
    printf("Ingrese la cantidad de numeros fibonacci que desea escanear: ");
    scanf(" %d", &ingreso);
    for (int i = 0; i < ingreso; i++)
    {
        temp = numero1 + numero2;
        numero1 = numero2;
        numero2 = temp;
        printf("Numero de fibonacci %d: [%d]\n",i, temp);
    }    
    return 0;
}