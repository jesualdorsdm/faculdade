
#include <stdio.h>

int main( )
{
char x;

 printf("Insere um .... \n");
 scanf("%c" , &x);


printf("O valor introduzido foi  %c \n" , x);
printf("O seu valor na tabela ASCII  e %d \n" , x);

if (x >= 65 && x <= 90)
{
printf("O caracter e maiusculo \n");
}
else
 if (x >= 97 && x <= 122)
  {
  printf("O caracter e minusculo \n");
  }
  else {
  printf("O caracter e de outro tipo \n");
 }

}
