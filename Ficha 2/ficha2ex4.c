#include <stdio.h>


void main()
{
float fah, cel;
printf("Introduza a temperatura em graus fahrenheit:");
scanf("%f",&fah);
cel=(fah-32.0)/1.800; /*est� � a formula correta de convers�o.*/
printf("a temperatura de %f fanrenheit e %f celcius",fah ,cel);
}
