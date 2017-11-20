#include <stdio.h>
#define min 100
#define max 999

void main()
{

int numax,numin,d3,d2,d1,aux,i=0;


do{
printf("introduza um valor maximo entre 100 a 999:");
scanf("%d",&numax);
printf("introduza um valor minimo entre 100 a 999:");
scanf("%d",&numin);
}while(numin<min|| numax>max || numin>=numax);

for(i=numin;i<=numax;i++)
{
 aux=i;
 d1=aux%10;
 aux=aux/10;
 d2=aux%10;
 d3=aux/10;

if(d1*d1*d1+d2*d2*d2+d3*d3*d3==i)
printf("o numero %d respeita a condicao\n",i);
}


}
