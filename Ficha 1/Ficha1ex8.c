#include <stdio.h>


void main ()
{
int valor, segs ,irs;

printf("Introduza o valor iliquido do salario:");
scanf("%d",&valor);

segs=valor*0.11;
irs=valor*0.25;

valor=valor-segs-irs;


printf("O valor do seu salario liquido e de %d",valor);












}
