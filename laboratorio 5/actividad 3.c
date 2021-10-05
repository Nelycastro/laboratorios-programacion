#include <stdio.h>

int main()[
    const float PI = 3.1415;
    float radio = 0;
    float perimetro = 0;
    float area = 0;
    printf("ingrese el valor del radio de la circunferencia:\n");
    scanf("%f", &radio);
    perimetro = 2 * PI * radio;
    area = PI * radio * radio;
    printf("el perimetro es: %.2f\n",perimetro);
    printf("el area es: %.2f\n", area);
    return 0;
]