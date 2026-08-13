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
    int numero1;
    int numero2;
    int contador = 0;
    int par = 0;
    printf("Numeros pares en rango\nIngrese el primer numero: ");
    scanf("%d",&numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&numero2);
    contador = numero1;
    if (numero2 == numero1 || (numero1 == 0 && numero2 == 0))
    {
            contador = numero2;
    }
    else if(numero1 < numero2)
    {
        while (contador < numero2)
        {
            
            if (numero1 % 2 == 0)
            {
                printf("[%d]",numero1);
            }
            numero1++;
            contador++;
        }
    }   
    return 0;
}