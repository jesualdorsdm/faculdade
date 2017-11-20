#include <stdio.h>

void main()
 {
     int dia,mes,ano;
     printf("introduza uma data no formato dd/mm/aa:");
     scanf("%d/%d/%d",&dia,&mes,&ano);
    printf("data e %.2d%.2d%.2d",ano,mes,dia);
 }
