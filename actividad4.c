# incluye  < stdio.h >

int  main () {
    // Variables
    int puntos = 0 ;
    int codigo = 0 ;
    int precio = 0 ;
    int opcion = 0 ;

    // Pedir y guardar valores
    printf ( " Ingrese los puntos que tiene acumulados: " );
    scanf ( " % i " , & puntos);
    printf ( " Ingrese el código del producto: " );
    scanf ( " % i " , & codigo);
    printf ( " Ingrese el precio del producto: " );
    scanf ( " % i " , & precio);

    // Verificar si alcanza para pagar con puntos
    if (puntos * 10 > = precio) {
        printf ( "¿ Desea pagar con puntos? \ n " );
        printf ( " 1.- Sí \ n " );
        printf ( " 2.- No \ n " );
        scanf ( " % i " , & opcion);

        si (opcion == 1 ) {
            printf ( " Pago con puntos. \ n " );
            puntos - = precio / 10 ;
        } más {
            if ((codigo> = 100 ) && (codigo < 200 )) {
                si (precio < 10000 ) {
                    printf ( " Acumula 1 punto cada $ 100. \ n " );
                    puntos + = (precio / 100 );
                } más {
                    printf ( " Acumula 1 punto cada $ 50. \ n " );
                    puntos + = (precio / 50 );
                }   
            } más {
                si (precio < 10000 ) {
                    printf ( " Acumula 1 punto cada $ 50. \ n " );
                    puntos + = (precio / 50 );
                } más {
                    printf ( " Acumula 1 punto cada $ 30. \ n " );
                    puntos + = (precio / 30 );
                }
            }
        } 
    } más {
        printf ( " Pago con efectivo. \ n " );
        if ((codigo> = 100 ) && (codigo < 200 )) {
                si (precio < 10000 ) {
                    printf ( " Acumula 1 punto cada $ 100. \ n " );
                    puntos + = (precio / 100 );
                } más {
                    printf ( " Acumula 1 punto cada $ 50. \ n " );
                    puntos + = (precio / 50 );
                }   
            } más {
                si (precio < 10000 ) {
                    printf ( " Acumula 1 punto cada $ 50. \ n " );
                    puntos + = (precio / 50 );
                } más {
                    printf ( " Acumula 1 punto cada $ 30. \ n " );
                    puntos + = (precio / 30 );
                }
            }
    }
    printf ( " Puntos totales: % d \ n " , puntos);
    return  0 ;
} 