#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c,
          delta,
          sqrtdelta,
        raiz1,raiz2;

        printf("Equa��o do 2o grau: ax� + bx + cx = 0\n");

        printf("introduza o valor de a: ");
        scanf("%f", &a);

        printf("introduza o valor de b: ");
        scanf("%f", &b);

        printf("introduza o valor de c: ");
        scanf("%f", &c);


        if(a != 0)
        {

            delta = (b*b) - (4*a*c);
            sqrtdelta = sqrt(delta);

            if(delta >= 0)
            {
                raiz1 = (-b + sqrtdelta)/(2*a);
                raiz2 = (-b - sqrtdelta)/(2*a);
                printf("Ra�zes: %.2f e %.2f", raiz1, raiz2);
            }
            else
            {
                delta = -delta;
                sqrtdelta = sqrt(delta);
                printf("Ra�z 1: %.2f + i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));
                printf("Ra�z 2: %.2f - i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));

            }

        }
        else
            printf("Coeficiente 'a' inv�lido. N�o � uma equa��o do 2o grau");
}
