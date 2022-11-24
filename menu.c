//Camacho Bolaños Andrés 1196 Diseño de Algoritmos Proyecto Final//
//Programa para crear un menú con selección de múltiples programas//
//Los programas hechos en clase han sido modificados para integrarse correctamente a este código//

#include<stdio.h>
#include<math.h>
#define F 3
#define C 3 //Dimensiones para todas las matrices//
//Programa para generar una matriz transpuesta a partir de una original//
void matriz_transpuesta(){	
	int m, n, c, d, original[3][3], trans[3][3];
	
	printf("Ingrese el número de filas y columnas, separados por un espacio: ");
	scanf("%d%d",&m,&n);
	printf("Ingrese los elementos de la matriz: \n"); //Se introducen las propiedades de la matriz//
	
	for(c=0;c<m;c++){
		for(d=0;d<n;d++){
			scanf("%d",&original[c][d]);
		}
	}
	
	for(c=0;c<m;c++){
		for(d=0;d<n;d++){
			trans[d][c] = original[c][d]; //Se hace la transformación//
		}
	}
	
	printf("La matriz transpuesta es: \n");
	
	for(c=0;c<n;c++){
		for(d=0;d<m;d++){
			printf("%d\t",trans[c][d]);
		}  
		printf("\n"); //Se imprimen resultados//
	}
	
}
//
/* 
Realiza un programa que calcule el area de la figura seleccionada:
Cuadrado
Trapecio
Rectángulo
*/
void cuadrados(){

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

}

//Programa para multiplicar matrices de 2x2//

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
    //Se imprime la matriz
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
Se tiene que utilizar el parámetro lm para que funcione: gcc triangulo.c -lm -o triangulo en linux
*/

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
void salario_neto(){
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
}

//Programa para realizar conversiones de temperatura//
int opc, opc_c;
float temperatura,resultado;

void temperaturas(){
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
}

//Una vez que todos los códigos se han escrito, iniciaremos nuestra función main donde llamaremos a las funciones que contienen a los demás programas//
int main() {

    int n, eleccion; //Se enlistan todos los programas que contiene el menú//
    
    printf("\nBienvenido\n");
    printf("\n Por favor, introduzca una opción (1-8):");
    printf("\n 1.Triángulo");
    printf("\n 2.Cuadrado");
    printf("\n 3.Factorial");
    printf("\n 4.Salario");
    printf("\n 5.Suma de matrices");
    printf("\n 6.Multiplicación de matrices");
    printf("\n 7.Matriz transpuesta");
    printf("\n 8.Conversiones de temperatura\n");
//Se filtra la opción que va a elegir el usuario//
    scanf("%d", &eleccion);
    printf("\n");

    if ( eleccion >=1 || eleccion <=8){
//Se limitan las opciones que pueden ser válidas//
    switch (eleccion){ //Iniciamos un switch para acceder a los programas mediante casos//
        
    case 1: //En el triangulo se hizo una función independiente en clase para cada propiedad//
    printf("\n Iniciar programa triángulo\n");
    printf("\n Seleccione la opción a realizar: \n1.Área, \n2.Hipotenusa, \n3.Ángulo\n");
    scanf("%d", &n);
    if (n ==1){ //Usaremos if, else e if else para simplificarlo//
    area();
    }
    else if (n==2){
    hipotenusa();
    }
    else {
    angulo();
    }
    break;
    
    case 2: //Iniciando programa de cuadrado, rectángulo y trapecio//
    printf("\n Iniciar programa cuadrado\n");
    cuadrados();
    break;

    case 3: //Iniciando programa para obtener de un número su factorial//
    printf("\n Iniciar programa factorial\n");
    factorial();
    break;

    case 4: //Iniciando programa para calcular el salario neto//
    printf("\n Iniciar programa salario\n");
    salario_neto();
    break;

    case 5: //Iniciando programa para realizar una suma de matrices//
    printf("\n Iniciar programa suma de matrices\n");
    suma_matrices();
    break;
    
    case 6: //Iniciando programa para multiplicar matrices//
    printf("\n Iniciar programa multiplicación de matrices\n");
    multiplicacion_matrices();
    break;

    case 7: //Iniciando programa para convertir una matriz a su transpuesta//
    printf("\n Iniciar programa matriz transpuesta\n");
    matriz_transpuesta();
    break;
    
    case 8: //Iniciando programa para realizar conversiones de temperatura
    printf("\n Iniciar programa conversiones\n");
    temperaturas();
    break;
    
    default: //Caso por defecto al seleccionar un valor distinto//
    printf("\n :)\n");

}
}
else{ printf("Fin del programa"); //El programa finaliza//
}
return 0;

}
