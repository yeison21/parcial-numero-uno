#include <stdio.h>


int main()

{
    int num;
    //pedimos los valores que necesitamos
    printf("ingrese su numero\n");
    scanf("%d", &num);
    switch (num)

    //ahora declaramos declaramos las variables

    {
        case 1:
            printf("el dia es lunes\n");
            break;
            case 2:
            printf("el dia es martes\n");
            break;
            case 3:
            printf("el dia es miercoles\n");
            break;
            case 4:
            printf("el dia es jueves\n");
            break;
            case 5:
            printf("el dia es viernes\n");
            break;
            case 6:
            printf("el dia es sabado\n");
            break;
            case 7:
            printf("el dia es domingo\n");
            break;
            default:
            printf("error");
    }
    return 0;
}
