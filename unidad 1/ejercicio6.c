#include <stdio.h>
int main()
{

    int i, a, b, m;

    printf("\n dame un numero a multiplicar");
    scanf("%i", &a);
    printf("\n dame un numero a multiplicar");
    scanf("%i", &b);

    m = 0;

    for (i = 1; i <= b; i++)
    {
        m = m + a;
    }

    printf("\n %i x %i = %i",a,b,m);
    return 0;
}