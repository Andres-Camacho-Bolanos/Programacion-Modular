#include <stdio.h>
#include <math.h>
#define F 3
#define C 3
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
int main(){
  matriz_transpuesta();
  return 0;
}
