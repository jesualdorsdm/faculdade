#include <stdio.h>
void main()
{
    int idade=0,media=0,idademaxima=0,idademinima=999,somador=0,contador=0;

do
{
    printf ("introduza a idade do individuo: ");
    scanf ("%d",&idade);
    if (idade>0)
    {
        somador=somador+idade;
        contador++;
        if (idade>idademaxima)
        {
        idademaxima=idade;
        }
        if (idade<idademinima)
        {
        idademinima=idade;
        }
    }
}
while(idade>0);

media=somador/contador;
printf("\n media %d", media);
printf ("\n idade minima %d", idademinima);
printf("\n idade maxima %d", idademaxima);

}
