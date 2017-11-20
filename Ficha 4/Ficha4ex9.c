#include <stdio.h>

void main()
{
int num,max=0,i=0,pos;
do{
printf("introduza um valor, o 0 vai parar de pedir:");
scanf("%d",&num);
i++;
if(num>max)
{max=num;
pos=i;}
}while(num!=0);




printf("o numero maximo:%d e a sequencia e %d posicao %d",max,i,pos);


}
