//Programa para realizar conversiones de temperatura//

#include<stdio.h>


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
