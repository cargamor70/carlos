#include <stdio.h>
int main(){

int m,i;
float c1,c2,c3,c4,c5,c6,c7,c8,promedio,calificacion;
char s;

printf("\ncuantas materias llevas");
scanf("%i",&m);

for ( i = 1; i < m; i++)
{

    printf("\ndime tu calificacion");
    scanf("%i",&calificacion);
    calificacion=calificacion;
    promedio=calificacion/m;

    if (promedio < 7)
        {
            printf("\n reprobado con %f",promedio);
        }

        else if (promedio == 8.5 )
        {
            printf("\n aprobado  con %f",promedio);
        }

        else if (promedio >8.5 && promedio < 9 )
        {
            printf("\n aprobado necesitas beca con %f",promedio);
        }
        else if (promedio >=9 && promedio <10){

            printf("\n aprobado pasa por tu  beca con %f",promedio);
        }

}


return 0;

}