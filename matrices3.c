//Programa para obtener la matriz transpuesta a partir de la original//

#include<stdio.h>
#define MAX 3
int main(int argc, char** args)
{
int matriz[MAX][MAX], columna, renglon, i=0, j=0;
printf("Introduce el número de columnas ");
scanf("%d", &columna);
printf("Introduce el número de renglones ");
scanf("%d", &renglon);
for(i = 0;i < renglon;i++)/*SE LEEN LOS DATOS INTRODUCIDOS*/
{
for(j = 0;j < columna;j++){
printf("Introduce los valores de la matriz [%d][%d]==>\t", i+1, j+1);
scanf("%d", &matriz[i][j]);
}
}
printf("\n\n\t\tMatriz original");/* SE IMPRIME LA MATRIZ ORIGINAL*/
printf("\n\n");
for(i = 0;i < renglon;i++){
printf("\n\t\t");
for(j = 0;j < columna;j++){
printf(" %6d ", matriz[i][j]);
}
}
printf("\n\n\t\tMatriz transpuesta");/* SE IMPRIME LA MATRIZ TRANSPUESTA*/
printf("\n\n");
for(i = 0;i < columna;i++){
printf("\n\t\t");
for(j = 0;j < renglon;j++){
printf(" %6d ", matriz[j][i]);
}
}
printf("\n\n\n");
}
