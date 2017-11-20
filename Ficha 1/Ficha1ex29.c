#include <stdio.h>

void main()
{

float peso, media,total, aux;
int cont;
media;
total=0;
do
{
printf("introduza o valor do peso");
scanf("%f",&peso);
if(peso>=60)
{

 cont++;
 total+=peso;
 }
 else{
if(peso>aux){
    aux=peso;

    }

}

}
while(peso>=0);
 media=(total/cont);

printf("o valor da media e %f",media);

}







