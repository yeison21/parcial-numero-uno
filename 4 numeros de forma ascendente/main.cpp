#include <stdio.h>


int main(){

    int num1;
    int num2;
    int num3;
    int num4;
    int aux;

    //pedimos los valores que necesitamos
    printf("\n\n\tvamos a ordenas 4 numeros de menor a mayor\n\n\t");


    printf("\n\n\tintroduzca el primer numero:");
    scanf("%d",&num1);

    printf("\n\n\tintroduzca el segundo numero:");
    scanf("%d",&num2);

    printf("\n\n\tintroduzca el tercer numero: ");
    scanf("%d",&num3);

    printf("\n\n\tintroduzca el cuarto numero:");
    scanf("%d",&num4);

    //declaramos los valores
    if(num1>num2)
    {
        aux=num2;
        num2=num1;
        num1=aux;
    }

    if(num2>num3)
    {
        aux=num3;
        num3=num2;
        num2=aux;
    }

    if(num1>num3)
    {
        aux=num3;
        num3=num1;
        num1=aux;
    }

    if(num2<num1)
    {
        aux=num1;
        num1=num2;
        num2=aux;
    }

    if(num4<num2)
    {
        aux=num4;
        num4=num2;
        num2=aux;
    }

    if(num4<num1)
    {
        aux=num4;
        num4=num1;
        num1=aux;
    }

    if(num4<num3)
    {
        aux=num4;
        num4=num3;
        num3=aux;
    }

    printf("los numeros de menor a mayor son: %d,%d,%d,%d",num1,num2,num3,num4);


    return 0;
}
