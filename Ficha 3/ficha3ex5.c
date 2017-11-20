#include <stdio.h>

void main()
{
int hora,min;

printf("Introduza as horas e minutos no formato 00:00 :");
scanf("%d:%d",&hora,&min);

if(hora<=11){

    printf("%2.2d:%2.2dam",hora,min);
}
else
if(hora>=13){

hora=hora-12;
printf("%2.2d:%2.2dpm",hora,min);
}else
 if(hora>=12&&hora<11){
   printf("%2.2d:%2.2dpm",hora,min);
 }
}
