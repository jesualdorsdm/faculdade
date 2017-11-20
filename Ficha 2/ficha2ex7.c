#include <stdio.h>

void main()
{
int freq1, freq2, trabp,media,nota;
printf("Introduza o valor da nota da primeira frequencia:");
scanf("%d",&freq1);
printf("Introduza o valor da nota da segunda frequencia:");
scanf("%d",&freq2);
printf("Introduza o valor da nota do trabalho pratico:");
scanf("%d",&trabp);

freq1=(freq1*40)/20;
freq2=(freq2*40)/20;
trabp=(trabp*20)/100;

media=freq1+freq2+trabp;
nota=(media*20)/100;
printf("A nota final e de %d e a media e de %dporcento",nota,media);


}
