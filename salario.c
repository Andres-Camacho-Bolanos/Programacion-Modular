//Programa para calcular el salario neto mensual//

#include<stdio.h>

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
