#include <stdio.h>

void main()

{
int numero,resto,somatorio;

printf("Introduza um numero inteiro para obter o somatorio dos seus digitos \n");
scanf("%d",&numero);
somatorio=0;

while (numero>0)
{
resto=numero%10;
numero=numero/10;
somatorio=somatorio+resto;
}

printf("O somatorio e %d \n",somatorio);

}
