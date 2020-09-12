#include<stdio.h>
int main(){


int materias,cont,n,res;
float promedio,calificacion;


do
{

promedio=0;
printf("\n cuntas materias llevas");
scanf("%i"&materias);

cont = 1;

while (cont <= materias)
{
    printf("\n dame calificacion %i",cont);
    scanf("%f",&calificacion);
    promedio=promedio + calificacion;
    cont ++;
}

promedio=promedio/materias;

if (promedio <7)
{
    printf("no pasaste");
}

else if (promedio >7 && primedio<8.5)
{
    printf(" pasaste");
}

else if (promedio >8.5 && primedio<9)
{
    printf("tramita una beca");
}

else if (promedio >9 && primedio<9.5)
{
    printf("deevrias ptener veca");
}

else if (promedio >9 && primedio<10)
{
    printf("pasa por tu veca");
}



printf("para repetir preciona");
scanf("%i",res);

} while ( res==1);




return 0;
}