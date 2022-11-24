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
	
