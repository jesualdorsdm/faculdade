#include <stdio.h>

void main()
{
 int x,y;

 printf("Introduza as cordenadas do ponto x:");
 scanf("%d",&x);
 printf("\nIntroduza as cordenadas do ponto y:");
 scanf("%d",&y);

 if(x>0&&y>0){
    printf("Fica no 1 quadrante");


 }
 else
 if(x<0&&y>0){

    printf("fica no 2 quadrante");
 }
    else
    if(x<0&&y<0){


        printf("Fica do 3 quadrante");
    }
    else
     printf("fica no 4 quadrante");






}
