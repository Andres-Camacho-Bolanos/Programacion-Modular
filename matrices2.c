#include <stdio.h>
#include <math.h>
#define F 2
#define C 2
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
int main(){
     multiplicacion_matrices();
     return 0;
}
