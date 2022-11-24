//Programa para crear un menú con selección de múltiples programas//

#include<stdio.h>
#include<math.h>
//Programa para multiplicar matrices de 2x2//
#define F 2
#define C 2

void multiplicacion_matrices(){
     
    int MatrizA[F][C],MatrizB[F][C],MatrizC[F][C],filas,columnas, k, suma,j,i;
printf("Matriz 1\n");
 //Matriz A
    printf("Indique el numero de filas:");scanf("%d",&filas); //SE INDICAN LAS PROPIEDADES DE LA PRIMERA MATRIZ//
    printf("Indique el numero de columnas:");scanf("%d",&columnas);

    for(int i=0; i < filas; i ++){
        for(int j=0;j < columnas; j ++){
            printf("Indique los valores de su matriz[%d][%d]:",i + 1 ,j + 1);scanf("%d",&MatrizA[i][j]); //SE INTRODUCEN LOS VALORES//
        }
    }
   //Matriz B 
    printf("\nMatriz 2\n");
    printf("Indique el numero de filas:");scanf("%d",&filas); //SE INDICAN LAS PROPIEDADES DE LA SEGUNDA MATRIZ//
    printf("Indique el numero de columnas:");scanf("%d",&columnas);

    for(i=0; i < filas; i ++){
        for(j=0;j < columnas; j ++){
            printf("Indique los valores de su matriz [%d][%d]:",i + 1 ,j+ 1);scanf("%d",&MatrizB[i][j]); //SE INTRODUCEN LOS VALORES//
        }
    }

    //Producto de matrices
    for ( i=0; i < filas; i ++){
        for(j=0; j< columnas;j++){
            int suma=0;
            for (k=0;k < columnas; k ++){
                suma += MatrizA[i][k] * MatrizB[k][j];
                
            }
            MatrizC[i][j]= suma;
            printf("\t%d",MatrizC[i][j]);
            
        }
        printf("\n"); //SE IMPRIME EL RESULTADO//
    }
}
//Programa para sumar dos matrices//
#define F 10
#define C 10

      
void suma_matrices(){
    printf("Programa para calcular la suma de dos matrices\n\n");

    int matriz_A[F][C] , matriz_B[F][C], matriz_C[F][C],n_filas, n_columnas,filas,columnas;
    
    printf("Matriz 1\n \n");

    printf("Indique el número de filas:");scanf("%d",&n_filas); //SE INTRODUCEN LAS PROPIEDADES DE LA PRIMERA MATRIZ//
    printf("Indique el número de columnas:");scanf("%d",&n_columnas);

    //Matriz a
    
    for (filas=0;filas < n_filas; filas ++){

        for(columnas=0;columnas < n_columnas;columnas ++){
            printf("Indique el elemento: [%d][%d]:",filas  + 1 ,columnas + 1);scanf("%d",&matriz_A[filas][columnas]); //SE INTRODUCEN LOS VALORES//
        }
    }


    //Matriz B
    printf("\n");
    printf("Matriz 2\n");
    
    printf("Indique el número de filas:");scanf("%d",&n_filas); //SE INTRODUCEN LAS PROPIEDADES DE LA SEGUNDA MATRIZ//
    printf("Indique el número de columnas:");scanf("%d",&n_columnas);
    printf("\n");

    for(filas=0;filas < n_filas; filas ++){
        for (columnas=0;columnas < n_columnas;columnas++){
            printf("Indique el elemento:[%d][%d]:",filas  + 1 ,columnas + 1);scanf("%d",&matriz_B[filas][columnas]); //SE INTRODUCEN LOS VALORES//
        }
    }

          
    //Suma de matrices
    for(filas=0;filas < n_filas; filas ++){
        for (columnas=0; columnas < n_columnas;columnas++){
            
            matriz_C [filas][columnas]= matriz_A[filas][columnas] + matriz_B[filas][columnas];
    
        }
    }
    
    printf("\n");
    //Impresión de la matriz
    for (filas=0; filas < n_filas;filas ++){
        
        for(columnas=0;columnas < n_columnas;columnas ++){
            printf("\t%d",matriz_C[filas][columnas]);
        }
        printf("\n");    //SE IMPRIME EL RESULTADO//
    }
    
}
/*
La suma de cada cateto al cuadrado es igual a la hipotenusa al cuadrado
Triángulo rectángulo: un ángulo de 90° y todos los lados diferentes
Calcula la hipotenusa dek triángulo
Se tiene que utilizar el parámetro lm para que funcione: gcc triangulo.c -lm -o triangulo
*/

#include<stdio.h>
#include<math.h>

void triangulo(){
void hipotenusa(){


    float co, ca, h;
    
	printf("Indique el valor del cateto opuesto:");
	scanf("%f",&co);
    printf("Indique el valor del cateto adyacente:"); //SE INTRODUCEN LOS VALORES DE LOS CATETOS DEL TRIÁNGULO// 
	scanf("%f",&ca);   
    h=sqrt(co*co + ca*ca);
    printf("La hipotenusa mide: %f",h); //SE IMPRIME EL VALOR DE LA HIPOTENUSA DEL TRIÁNGULO//


}


void area(){
	
	float base,alt;
	float a;
	printf("Escribe la base:");
	scanf("%f",&base);
	printf("Escribe la altura:"); //SE INTRODUCEN LOS VALORES DEL TRIÁNGULO//
	scanf("%f",&alt);
	a=base*alt/2;
	printf("El area del triangulo es: %f",a); //SE IMPRIME EL VALOR DEL ÁREA DEL TRIÁNGULO//
	
	
}


void angulo(){
	
	
	float a1,a2,a3;
	printf("Escribe el valor de los 2 angulos:"); //SE INTRODUCEN LOS VALORES DE LOS ÁNGULOS DEL TRIÁNGULO//
	scanf("%f %f",&a1,&a2);
	a3=180 -(a1+a2);
	printf("El tercer angulo mide : %f",a3); //SE IMPRIME EL VALOR DEL TERCER ÁNGULO DEL TRIÁNGULO//
	
}
	char opc;
	printf("Eliga la opcion que desee: a)Hipotenusa de un triangulo rectangulo ,  b) area de un triangulo   c)valor de un angulo ");
	scanf("%c",&opc); //SE LEE LA OPCIÓN SLECCIONADA//
	
	
	switch(opc){ //SE APLICA EL CASO CORRESPONDIENTE A LA OPCIÓN SELECCIONADA//
		
		
		case 'a':
		hipotenusa();
		break;
		
		
		case 'b':
		area();
		break;
		
		
		
		case 'c':
		angulo();
		break;
	  	
		
		
	}
} 
int main() {
    triangulo();
    return 0;
}
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
    int suma_matrices;
    break;

    case 6:
    printf("\n Iniciar programa matrices 2");
    scanf(%d", &n);
    int multiplicacion_matrices;
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
