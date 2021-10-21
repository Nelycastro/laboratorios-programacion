# incluye  < stdio.h >
int numero1;
int numero2;
int resultado = 0 ;

int  main () {
   printf ( " Ingrese dos números de la forma: X, Y \ n " );
   scanf ( " % d , % d " , & numero1, & numero2);
   printf ( " Ingrese dos números de la forma: X  , Y \ n " );
   scanf ( " % d  , % d " , & numero1, & numero2);
   para ( int i = 0 ; i <numero2; i ++) {
       resultado + = numero1;
   }
      printf ( " El resultado de % d * % d es % d \ n " , numero1, numero2, resultado);
    return  0 ;
}