#include<stdio.h>

int main(){

    int numero1,numero2,numero3;

    //pedimos los valores que necesitamos
    printf("ingrse el primer numero:");
    scanf("%d", &numero1);
    printf("ingrese el segundo numero:");
    scanf("%d", &numero2);
    printf("ingrese el tercer numero:");
    scanf("%d", &numero3);

    //ahora declaramos las variables que usamos
    //creamos la condicion para saber si los numeros fueron ingresados de forma creciente
    if(numero1<numero2&&numero2<numero3){//si se cumple esta condicion se mostrara o se ejecutara lo siguiente
        printf("los numeros fueron ingresados de forma creciente:%d %d %d", numero1,numero2,numero3);//mostramos los numeros

    }
    else{//si no cumple esta condicion se muestra lo siguiente
        printf("los numeros no fueron ingresados de forma creciente");
    }

return 0;
}

