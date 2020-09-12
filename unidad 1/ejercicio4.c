#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, x1, x2, x2p, determinante;

    printf("\n dame el valor de a ");
    scanf("%f", &a);
    printf("\n dame el valor de b ");
    scanf("%f", &b);
    printf("\n dame el valor de c ");
    scanf("%f", &c);

    if (a == 0)
    {
        x = (-c / b);
        printf("\n x = %f", x);
    }
    else
    {

        determinante = (b * b - 4 * a * c);

        printf("\n %f determinante", determinante);

        if (determinante == 0)
        {
            x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
            printf("\n x1 igual a %f ig0ual a 0", x1);
        }

        if (determinante > 0)
        {
            x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
            x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
            printf("\n x1 es %f , x2 es %f ", x1, x2);
        }

        if (determinante < 0)
        {
            
            x2 = (-b / (2 * a));
            x2p = ( (sqrt(-1*(b * b - 4 * a * c)))) / (2 * a);
            printf("\n %f real y %f imaginario o %f",x2,x2p);
            printf("\n a vale b vale ");
        }
    }
    return 0;
}