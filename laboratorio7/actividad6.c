# incluye  < stdio.h >

numero = 3

para ( int i = 0 ; i <numero) {
a + b = 1    --- a = 1      b = 1
a + b = 2    --- a = 1      b = 2
a + b = 3    --- a = 2      b = 3
int  main () {
    int a = 0 ;
    int b = 1 ;
    int siguiente = 0 ;
    int elementos = 0 ;
    printf ( " Ingrese la cantidad de elementos de la sucesión que quiere imprimir: " );
    scanf ( " % i " , & elementos);
    printf ( " % i - " , a);
    printf ( " % i - " , b);
    for ( int i = 0 ; i <elementos; i ++) {
        siguiente = a + b;
        printf ( " % i - " , siguiente);
        a = b;
        b = siguiente;
    }
    printf ( " \ n " );
    return  0 ;
} 