#include <stdio.h>

int main()[
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;
    printf("ingrese el primer numero:\n");
    scanf("%d", &numero1);
    printf("ingrese el segundo numero:\n");
    scanf("%d", &numero2);
    resultado = numero1 + numero2;
    printf("el resultado de la suma entre %d y %d es: %d\n", numero1, numero2, resultado);
    return 0;
]