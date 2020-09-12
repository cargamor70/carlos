#include <stdio.h>
#include <math.h>
int main()
{

    int i,entero,numero,residuo,n;
    char a,bho;
    do
    {
         
         
         printf("\n a que lo quieres combertit b,h,o");
         scanf("%c",&bho);
         fflush(stdin);


        switch (bho)
        {
        case 'b':
            printf("\n binario");
            printf("\n dime el numero");
            scanf("%i",&numero);
            n = numero;
            
            while (n >1 )
            {
             residuo=numero % 2;
             printf("\n el residuo es %i ",residuo); 
             n=numero;
             numero=numero/2;
             printf("numero es %i",numero);

            }
            break;
        /* binario----------------------------------------------------------------------------------------------------------*/
        case 'h':
            printf("\n hexadecimal");
            printf("\n dime el numero");
            scanf("%i",&numero);
            n = numero;

            while (n != 0 )
            {
             residuo=numero % 16;
             printf("\n el residuo es %i ",residuo); 
             n=numero;
             numero=numero/16;
             printf("numero es %i",numero);

            }
            



            break;
        /* hexadecimal-------------------------------------------------------------------------------------------------------*/
        case 'o':
            printf("\n octal");
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