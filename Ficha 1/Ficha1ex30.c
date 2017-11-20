#include <stdio.h>

void main()
{
int a,b,i;
float ta, tb;

a=500;
b=1500;
ta=0.052;
tb=0.018;
i=0;
for(i;a<=b;i++)
{
a=a+a*ta;
b=b+b*tb;

}


printf("O numero de anos necessarios %d",i);




}
