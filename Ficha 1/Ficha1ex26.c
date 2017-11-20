#include <stdio.h>

void main()
{

int b, e, i,pot;
i=1;
do{
printf("Introduza o valor da base:");
scanf("%d",&b);
printf("introduza o valor do expoente\n");
scanf("%d",&e);
} while(e<0);
pot=1;
i=0;
while (i<e)
{

    pot=pot*b;
    i++;

}
printf("o valor do pot e %d",pot);

}
