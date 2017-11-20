#include <stdio.h>

void main()
{
float tempo,vel,dis,media;

printf("Introduza o tempo de viagem em min:");
scanf("%f",&tempo);
printf("\nIntroduza a velocidade constante da viagem:");
scanf("%f",&vel);
dis=vel*tempo;
media=(dis*7.8)/100.00;
printf("a distancia e de %5.2f e o consumo foi de %5.2f",dis,media);
}
