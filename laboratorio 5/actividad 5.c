#include <stdio.h>
int main()[
    float tarea1 = 0;
    float tarea2 = 0;
    float tarea3 = 0;
    float laboratorios = 0;
    float prueba1 = 0;
    float prueba2 = 0;
    float prueba3 = 0;
    printf("ingrese la nota de la prueba 1:\n");
    scanf("%f", &prueba1);
     printf("ingrese la nota de la prueba 2:\n");
    scanf("%f", &prueba2);
     printf("ingrese la nota de la tarea 1:\n");
    scanf("%f", &tarea1);
     printf("ingrese la nota de la tarea 2:\n");
    scanf("%f", &tarea2);
     printf("ingrese la nota de la tarea 3:\n");
    scanf("%f", &tarea3);
     printf("ingrese la nota de laboratorios:\n");
     scanf("%f", &laboratorios);
     prueba3 = (4.0 - 0.5 * (0.2 * tarea1 + 0,25 * tarea2 + 0,35 * tarea3 + 0,2 * laboratorios));
     printf("para aprobar el curso en la prueba 3 debe tener un %.1f\n", prueba3);
     return 0;
]