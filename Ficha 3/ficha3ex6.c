#include <stdio.h>

void main(){

int l1,l2,l3;

printf("Introduza o valor do 1,2,3 lado(separado com ,)");
scanf("%d,%d,%d",&l1,&l2,&l3);
if(l1==l2 && l2==l3){
    printf("E um triangulo equilatero");
}else
if(l1==l2 || l2==l3 || l1==l3)
{
    printf("E um triangulo isosceles");
}else

printf("E um triangulo escaleno");









}
