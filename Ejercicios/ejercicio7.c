/*
Ejercicio 2.5 – Tabla de Multiplicar
Mostrá tabla de multiplicar del 1 al 10 (todas las tablas).
-----------------
Ezequiel Nehuen
https://github.com/Enehuen
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int limite = 10;
    int resultado;
    for (int i = 1; i < (limite + 1); i++)
    {
        printf("Tabla del %d\n",i);
        for (int j = 1; j < (limite + 1); j++)
        {
            resultado = i * j;
            printf("[%d] x [%d] = %d\n",i, j, resultado);
        }
    }    
    return 0;
}