#include <stdio.h>
#include <math.h>
int main()
{

    int i, entero, numero, residuo, n;
    char a, bho;
    do
    {

        printf("\n a que lo quieres combertit b,h,o");
        scanf("%c", &bho);
        fflush(stdin);

        switch (bho)
        {
        case 'b':
            printf("\n binario");
            printf("\n dime el numero");
            scanf("%i", &numero);
            n = numero;

            while (n > 1)
            {
                residuo = numero % 2;
                printf("\n el residuo es %i ", residuo);
                n = numero;
                numero = numero / 2;
                printf("numero es %i", numero);
            }
            break;
        /* binario----------------------------------------------------------------------------------------------------------*/
        case 'h':
            printf("\n hexadecimal");
            printf("\n dime el numero");
            scanf("%i", &numero);
            n = numero;

            while (n > 0)
            {
                residuo = numero % 16;
                /*printf("\n el residuo es %i ",residuo); */
                n = numero;
                numero = numero / 16;
                /*printf("\n numero es %i",numero);*/
                /*printf("\n el residuo es %i ",residuo); */
                switch (residuo)
                {
                case 10:
                    printf("\n que es a");
                    break;

                case 11:
                    printf(" que es b");
                    break;
                case 12:
                    printf("\n que es c");
                    break;
                case 13:
                    printf("\n que es  d");
                    break;
                case 14:
                    printf("\n que es e");
                    break;
                case 15:
                    printf("\n que es f");
                    break;
                default:
                    break;
                }
                printf("\n el residuo es %i ", residuo);
            }

            break;
        /* hexadecimal-------------------------------------------------------------------------------------------------------*/
        case 'o':
            printf("\n octal");
            printf("\n dime el numero");
            scanf("%i", &numero);
            n = numero;

            while (n > 0)
            {
                residuo = numero % 8;
                printf("\n el residuo es %i ", residuo);
                n = numero;
                numero = numero / 8;
                printf("numero es %i", numero);
            }
            break;
        /* octal-------------------------------------------------------------------------------------------------------------*/
        default:
            break;
        }
        printf("\n para continuar teclea s y para terminar cualquier otra tetra");
        scanf("%c", &a);
        fflush(stdin);
    } while (a == 's');
    return 0;
}