#include <stdio.h>
int main()
{
    int a, b, c, ab, ac, bc;
    printf("\n DAME UN lado ");
    scanf("%i", &a);
    printf("\nDAME OTRO lado ");
    scanf("%i", &b);
    printf("\nDAME OTRO lado ");
    scanf("%i", &c);
    ab = a + b;
    ac = a + c;
    bc = b + c;
    // if para saber si es triagulo o no
    if (ab + bc > ac && bc + ac > ab && ab + ac > bc)
    {

        if (a == b && b == c)
        {
            printf("\n equilatero");
        }
        else if (a != b && b != c)
        {
            printf("\n escaleno");
        }

        else if (a == b || b == c || a == c)
        {
            printf("\n isoceles");
        }
    }
    else
        printf("\n no triangulo");
    printf("\n fin");
    return 0;
}