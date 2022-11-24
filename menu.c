//Programa para crear un menú con selección de múltiples programas//

#include<stdio.h>
#include<math.h>
//Programa para calcular el salario neto mensual//
void sueldo_neto(){
	float bono,iva_a,iva_r,salario_bruto,salario_neto;
	 
	printf("Introduzca el salario bruto:");scanf("%f",&salario_bruto); //SE INTRODUCE EL SALARIO BRUTO//
	
    printf("Introduzca el porcentaje de IVA Agregado:");scanf("%f",&iva_a);
	iva_a = (iva_a/100)*salario_bruto;
	
    printf("Introduzca el porcentaje de IVA Retenido:");scanf("%f",&iva_r); //SE INTRODUCEN LOS VALORES DEL IVA//
	iva_r = iva_r/100*salario_bruto;
	salario_neto = (salario_bruto+iva_a)-iva_r;
	
    printf("El salario neto es:%.2f\n",salario_neto); //SE IMPRIME EL SALARIO NETO//
	
    if (salario_neto>10000) { //SI EL SALARIO NETO ES MENOR A $10,000, ENTONCES SE AGREGA UN BONO DEL %5//
		printf("Introduzca el valor de su bono:");scanf("%f",&bono);
		bono = (salario_neto*bono)/100;
		salario_neto = salario_neto + bono;
		
        printf("El nuevo salario neto es:%.2f",salario_neto); //SE IMPRIME EL NUEVO SALARIO NETO//
	} 
    
    else {
		printf("Fin del programa");
	}
	return 0;
}
int main() {

    int n, opcion;
 do
 {
    printf("\n 1.triángulo");
    printf("\n 2.cuadrado");
    pirntf("\n 3.factorial");
    printf("\n 4.salario");
    printf("\n 5.matrices");
    printf("\n 6.matrices2");
    printf("\n 7.matrices3");
    printf("\n 8.Salir");
//Se filtra la opción que va a elegir el usuario//
do
{
    printf("\n Introduzca una opción (1-8):");
    scanf("%d", &opción);
}
while ( opción <1 || >8);
//Se limitan las opciones que pueden ser válidas//
switch (opción)
{
    case 1: 
    prinft("\n Iniciar programa triángulo");
    scanf("%d", &n);
    int triangulo;
    break;

    case 2:
    printf("\n Iniciar programa cuadrado");
    scanf("%d", &n);
    int cuadrado;
    break;

    case 3:
    printf("\n Iniciar programa factorial");
    scanf("%d", &n);
    int factorial;
    break;

    case 4:
    printf("\n Iniciar programa salario");
    scanf("%d", &n);
    int sueldo_neto;
    break;

    case 5:
    printf("\n Iniciar programa matrices");
    scanf(%d", &n);
    int matrices;
    break;

    case 6:
    printf("\n Iniciar programa matrices 2");
    scanf(%d", &n);
    int matrices 2;
    break;

    case 7:
    printf("\n Iniciar programa matrices 3");
    scanf("%d", & n);
    int matrices 3;
    break;

}while (opcion! =8);
return 0;
}
