#include <stdio.h>
#include <math.h>
#define F 10
#define C 10
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
int main(){
      suma_matrices();
      return 0;
}
