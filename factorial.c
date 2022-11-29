#include <stdio.h>
#include <math.h>
//Programa para calcular el factorial de un número//
void factorial(){

    int entero,facto=1,i;
    printf("Introduzca un numero:");scanf("%i",&entero); //SE INTRODUCE UN VALOR//

    for ( i=1; i <= entero; i ++){
        
        facto = facto * i;
        printf("El resultado es: %i ",facto); //SE IMPRIME EL RESULTADO//
        
    }
        
    
    
    
}
int main(){
    factorial();
    return 0;
}
