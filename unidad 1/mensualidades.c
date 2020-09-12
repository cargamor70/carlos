#include <stdio.h>
int main(){

float costo,meses,pagos,enganche;
char r;
do
{
printf("\n cual es el costo de el veiculo");
scanf("%f",&costo);
fflush(stdin);







if (costo <200000)
{
   enganche = costo * .30;
   meses=18;
   pagos= (costo-enganche)/meses;
   printf("\n el enganche es %f",enganche);
   printf("\n el pago en meses esde  %f",pagos);


}

else if (costo<300000 && costo >=200000)
{
   enganche = costo * .35;
   meses=24;
   pagos= (costo-enganche)/meses;
   printf("\n el enganche es %f",enganche);
   printf("\n el pago en meses esde  %f",pagos);


}



else if (costo >300000)
{
   enganche = costo * .40;
   meses=12;
   pagos= (costo-enganche)/meses;
   printf("\n el enganche es %f",enganche);
   printf("\n el pago en meses esde  %f",pagos);

}



printf("\n deseas continuar preciona s para salir cualquier otra tecla");
scanf("%c",&r);
fflush(stdin);
} while (r =='s');
return 0;

}