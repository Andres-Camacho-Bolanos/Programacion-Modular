//Programa para crear un menú con selección de múltiples programas//

#include<stdio.h>
#include<math.h>
//Programa para calcular el factorial de un número//
void factorial(){

    int entero,facto=1,i;
    printf("Introduzca un numero:");scanf("%i",&entero); //SE INTRODUCE UN VALOR//

    for ( i=1; i <= entero; i ++){
        
        facto = facto * i;
        printf("El resultado es: %i ",facto); //SE IMPRIME EL RESULTADO//
        
    }
        
    
    
    
}
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
//Programa para realizar conversiones de temperatura//
void conversiones(){
int opc, opc_c;
float temperatura,resultado;


void fahrenheit(){
    
    printf("Indique el valor de la temperatura:");scanf("%f",&temperatura); //SE LEE EL VALOR DE LA TEMPERATURA//
    printf("\n\n");
    printf("Indique la conversión deseada( seleccionar el número de la opción que corresponda): \n\n 1. F--> C \n 2. F-->K\n:");scanf("%i",&opc_c);
    //SE LEE LA OPCIÓN SELECCIONADA//
    
    if (opc_c==1){
        resultado= (temperatura - 32)*0.55 ;
        printf("El resultado es %.2f °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 459.67)*0.55 ;
        printf("El resultado es %.2f K",resultado);
    }    
    

    else{
        printf("Por favor, seleccione una opción valida"); //SE IMPRIME EL RESULTADO DE LA OPCIÓN SELECCIONADA//
    
    }
    
}
        

void celcius(){
    printf("Indique la conversión deseada (seleccionar el número de la opción que corresponda):\n1.C--> F \n2.C-->K\n:") ;scanf("%i",&opc_c);
    printf("Indique el valor de la temperatura:");scanf("%f",&temperatura); //SE LEE EL VALOR DE LA TEMPERATURA//
    
    if (opc_c==1){
        resultado= (temperatura * 1.8) + 32 ;
        printf("El resultado es %.2f °F",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 273.15) ;
        printf("El resultado es %.2f K",resultado);
    }    
    

    else{
        printf("Por favor, seleccione una opción valida"); //SE IMPRIME EL RESULTADO DE LA OPCIÓN SELECCIONADA//
    
    }
    
}

void kelvin(){

    printf("Indique el valor de la temperatura:");scanf("%f",&temperatura); //SE LEE EL VALOR DE LA TEMPERATURA//
    printf("Indique la conversión deseada: (seleccionar el número de la opción que corresponda)\n1.K--> C \n2.K-->F \n:");scanf("%i",&opc_c);
     
    if (opc_c==1){
        resultado= (temperatura - 273.15);
        printf("El resultado es %.2f °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura - 273.15)*1.8 + 32 ;
        printf("El resultado es %.2f °F",resultado);
    }    
    

    else{
        printf("Por favor, seleccione una opción valida"); //SE IMPRIME EL RESULTADO DE LA OPCIÓN SELECCIONADA//
    
    }
}
} 

int main(){

    printf("Indique la unidad del valor de la temperatura (seleccionar el número de la opción que corresponda):"); //SE LEE EL VALOR DE LA TEMPERATURA//
    printf("\n");
    printf("\n1.°F\n2.°C\n3. K\n:");scanf("%i",&opc);


    switch(opc) //SE SELECCIONA LA OPCIÓN CORRESPONDIENTE//
    { 
        
        case 1:
        fahrenheit();
        break;
    
        case 2:
        celcius();
        break;


        case 3:
        kelvin();
        break;   
    
    
        default:
            printf("Por favor, seleccione una opción valida"); //SE IMPRIME UN MENSAJE PREDETERMINADO EN CASO DE NO SELECCIONAR UNA OPCIÓN VÁLIDA//
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
    printf("\n 8.conversiones");
    printf("\n 9.Salir");
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
    
    case 8:
    printf("\n Iniciar programa conversiones");
    scanf("%d" & n);
    break;

}while (opcion! =9);
return 0;
}
