# incluye  < stdio.h >

int  main () {
    // Variables
    contraseña larga = 123456789 ;
    contraseña de usuario larga = 0 ;

    // Pedir y guardar contraseña
    printf ( " Ingrese su contraseña: " );
    scanf ( " % lu " , & userPassword);

    // Verificar si es correcta o no, luego repetir hasta que se acaben los intentos permitidos
    if (userPassword == contraseña) {
        printf ( " Bienvenido a su cuenta! \ n " );
    } más {
        printf ( " Clave incorrecta. Tiene 2 intentos más. \ n " );
        printf ( " Ingrese su contraseña: " );
        scanf ( " % lu " , & userPassword);
        if (userPassword == contraseña) {
            printf ( " Bienvenido a su cuenta! \ n " );
        } más {
            printf ( " Clave incorrecta. Tiene 1 intento más. \ n " );
            printf ( " Ingrese su contraseña: " );
            scanf ( " % lu " , & userPassword);
            if (userPassword == contraseña) {
                printf ( " Bienvenido a su cuenta! \ n " );
            } más {
                printf ( " Clave incorrecta. Usuario Bloqueado. \ n " );
            }
        }
    }

    return  0 ;
} 