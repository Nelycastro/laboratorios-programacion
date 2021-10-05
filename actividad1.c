# incluye  < stdio.h >

int numero;

int  main () {
    // PEDIR NÚMERO
    // Variable
    int numero;
    // Pedir número
    printf ( " Ingrese un número: \ n " );
    //  LEER NÚMERO
    //  Guardar número
    scanf ( " % d " , & numero);
    //  EVALUAMOS SI ES PAR O IMPAR
    //  Evaluar si es par o no
    if (numero% 2 == 0 ) {
        printf ( " ES PAR! \ n " );
    } más {
        printf ( " ES IMPAR! \ n " );
    }
    return  0 ;
} 