#include <stdio.h>


void main()
{

 int a,b,c,d,e,f,i,j,y,total=0;

 do{
 printf("\nIntroduza o valor de a:");
 scanf("%d,%d,%d,%d,%d,%d,",&a);
  printf("\nIntroduza o valor de b:");
 scanf("%d,%d,%d,%d,%d,%d,",&b);
  printf("\nIntroduza o valor de c:");
 scanf("%d,%d,%d,%d,%d,%d,",&c);
  printf("\nIntroduza o valor de d:");
 scanf("%d,%d,%d,%d,%d,%d,",&d);
  printf("\nIntroduza o valor de e:");
 scanf("%d,%d,%d,%d,%d,%d,",&e);
  printf("\nIntroduza o valor de f:");
 scanf("%d,%d,%d,%d,%d,%d,",&f);

}
while(a<0|| b<0|| c<0 || d<0 || e<0|| f<0);
for(i=a;i<=b;i++)
{
 for(j=c;j<=d;j++)
 {
    for(y=e;y<=f;y++)
     {
          total=total+i*j*y;

     }

 }

}

     printf("o valor e %d",total);

}
