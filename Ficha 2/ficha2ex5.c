#include <stdio.h>

void main()
{
int a,b;

 printf("Introduza o valor da variavel A:");
 scanf("%d",&a);
 printf("\nIntroduza o valor da variavel B:");
 scanf("%d",&b);
 a=a+b;/*esta opera��o matematica � mesmo a boss :P*/
 b=a-b;
 a=a-b;
 printf("o valor de A:%d o valor de B:%d",a,b);
}
