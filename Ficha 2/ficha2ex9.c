#include <stdio.h>

void main ()
{

    int n1,n2,n3,resol;

    printf("Introduza um numero de 3 digitos(de enter entre os numeros:\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    resol=n1+n2+n3;
    printf("O resultado para o numero %d%d%d e %d (%d+%d+%d)",n1,n2,n3,resol,n1,n2,n3);

}

