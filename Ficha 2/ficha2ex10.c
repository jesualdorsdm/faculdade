#include <stdio.h>

void main()
{
   int tempo, horas, horas_seg, minutos, segundos;
	horas_seg=3600;//horas em segundos
	printf("Entre com o numero de segundos: ");
	scanf("%d", &tempo);
	horas = (tempo/horas_seg); //resultado da hora
	minutos = (tempo -(horas_seg*horas))/60;
	segundos = (tempo -(horas_seg*horas)-(minutos*60));
	printf("%dh : %dm : %ds \n",horas,minutos,segundos);


   printf("O tempo de %d segundos e %dhoras,%dminutos,%dsegundos",tempo,horas,minutos,segundos);
}
