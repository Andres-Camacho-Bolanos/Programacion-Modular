/* 
Realiza un programa que calcule el area de la figura seleccionada:
Cuadrado
Trapecio
Rectángulo
*/
#include<stdio.h>
#include<math.h>


int main(){

    int opcion;
    
    printf("Menú:\n");
    printf("\nElegir el número de la opcion deseada:\n\n1.Calcular el area de un cuadrado\n2.Calcular el area de un trapecio\n3.Calcular el area de un rectangulo ");
    printf("\n\nOpción:");scanf("%i",&opcion); //SE LEE LA OPCIÓN SELECCIONADA//
    int lado;
    float b_mayor,b_menor,altura;
    float base,r_altura;
    float resultado;
    
	switch (opcion) //SE SELECCIONA EL CASO CORRESPONDIENTE A LAL OPCIÓN SELECCIONADA//
        {
            case 1:
				printf("Valor del lado del cuadrado:");scanf("%i",&lado); //SE LEE EL VALOR DE UN LADO DEL CUADRADO//
                resultado= lado * lado;
                printf("El resultado es: %.2f",resultado); //SE IMPRIME EL ÁREA DEL CUADRADO//

            break;

            case 2:
                
                printf("Indicar el valor de la base mayor:");scanf("%f",&b_mayor);
                printf("Indicar el valor de la base menor:");scanf("%f",&b_menor);
                printf("Indicar el valor de la altura:");scanf("%f",&altura); //SE LEEN LAS PROPIEDADES DEL TRAPECIO//
                resultado=((b_mayor + b_menor) * altura/2);
                printf("El resultado es:%.2f",resultado); //SE IMPRIME EL ÁREA DEL TRAPECIO//
            break;

            case 3:
               
                printf("Indique el valor de la base y de la altura del rectangulo:");scanf("%f %f",&base,&r_altura); //SE LEEN LAS PROPIEDADES DEL RECTÁNGULO//
                resultado= base * r_altura;
                printf("El resultado es: %.2f",resultado); //SE IMPRIME EL ÁREA DEL RECTÁNGULO//
            break;


            default:
                printf("No ha seleccionado una opción valida"); //SE IMPRIME UN MENSAJE PREDETERMINADO EN CASO DE NO SELECCIONAR UNA OPCIÓN VÁLIDA//
        }




    return 0;
}
