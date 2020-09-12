#include <stdio.h>
int main()
{

    int i, num, factorial;
    char a;
    do
    {
        /* code */

        printf("\n dame un numero ");
        scanf("%i", &num);
        fflush(stdin);
        factorial = 1;
        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }

        printf("\n factorial es %i", factorial);

        printf("\n para continuar teclea s y para terminar cualquier otra letra");
        scanf("%c", &a);
        fflush(stdin);

    } while (a == 's');
    return 0;
}