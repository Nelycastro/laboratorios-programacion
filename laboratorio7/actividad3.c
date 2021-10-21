# incluye  < stdio.h >

int  main () {
    int numero = 0 ;
    printf ( " Ingrese el número para el cual quiere buscar divisores: " );
    scanf ( " % i " , & numero);

    if (numero> 1 ) {
        printf ( " Los divisores de % i hijo: 1 - " , numero);
        para ( int i = 2 ; i <numero; i ++) {
            if (numero% i == 0 ) {
                printf ( " % i - " , i);
            }
        }
        printf ( " % i \ n " , numero);
    } más {
        printf ( " El divisor de % i es: 1 \ n " , numero);
    }

    return  0 ;
} 