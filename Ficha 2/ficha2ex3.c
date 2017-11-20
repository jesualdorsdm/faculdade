#include <stdio.h>
#include <math.h>
void main()
{
int cat1, cat2, hip;
float real,area;
printf("Introduza o valor do cateto adjacente:\n");
scanf("%d",&cat1);
printf("Introduza o valor do cateto oposto:\n");
scanf("%d",&cat2);

hip=(cat1*cat1)+(cat2*cat2);
real=sqrt(hip);
area=(cat1*cat2)/2;
printf("O valor da hipotenusa e de %4.2f\n",real);
printf("O valor da area do triangulo retangulo e de %4.2f",area);

}
