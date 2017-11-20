#include <stdio.h>

void main()
{
  char valor,valorm=0;

  printf("introduza uma letra: ");
  scanf("%c",&valor);

  if(valor >= 97 && valor <= 122)
  {valorm=valor-32;

  printf("A letra %c e em maiuscula %c",valor,valorm);
   }else

    if(valor >= 65 && valor <= 90)
{printf("O caracter introduzido %c ja e maiusculo.",valor);


}
else
    printf("Atencao! O caracter X nao pertence ao alfabeto");
}
