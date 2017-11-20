#include <stdio.h>
#define litro 1.30
void main ()
{

int kmm,kmf, litros, media;
float money,lucro;
printf("Valor marcado de km no inicio do dia:");
scanf("%d",&kmm);
printf("\nValor marcado de km no final do dia:");
scanf("%d",&kmf);
printf("litros gastos:");
scanf("%d",&litros);
printf("Dinheiro recebido:");
scanf("%f",&money);


media=(kmf-kmm)/litros;
lucro=((kmf-kmm)*litro)-money;

printf("a media e de %dkm/l e o lucro e de %f",media,lucro);










}
