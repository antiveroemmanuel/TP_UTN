#include <stdio.h>
#include <stdlib.h>
#include "utn_operacionesMatematicas.h"

int utn_operacionesMatematicas(int operacion)
{
    int resultado;
    int A;
    int B;

    printf("Elige una operacion: ");
    scanf("%d,\n",&operacion);
    switch(operacion)  /* Segun la opcion elegida tendremos los siguientes casos...*/
    {

    case 1:     /* Suma */

        printf("Introduzca el primer sumando:\n ");
        scanf("%d",&A);
        printf("\nIntroduzca el segundo sumando: ");
        scanf("%d",&B);
        resultado=A+B;
        printf("\n         La SUMA de %d + %d es igual a %i",A,B,resultado);
        break;
    case 2:     /* Resta */
        printf("\n         -> Introduzca el primer numero: ");
        scanf("%d",&A);
        printf("\n         -> Introduzca el segundo numero: ");
        scanf("%i",&B);
        resultado=A-B;
        printf("\n         La RESTA de %d - %d es igual a %d",A,B,resultado);
        break;
    case 3:     /* Multiplicacion */
        printf("\n         -> Introduzca el primer multiplicando: ");
        scanf("%d",&A);
        printf("\n         -> Introduzca el segundo multiplicando: ");
        scanf("%i",&B);
        resultado=A*B;
        printf("\n         La MULTIPLICACION de %d * %d es igual a %d",A,B,resultado);
        break;
    case 4:     /* Division */
        printf("\n         -> Introduzca el dividendo: ");
        scanf("%d",&A);
        printf("\n         -> Introduzca el divisor: ");
        scanf("%d",&B);
        if (B!=0)  /* Si el divisor es distinto de 0 realizara la operacion */
        {
            resultado=A/B;
            printf("\n         El cociente de la DIVISION de %d entre %d es igual a %d",A,B,resultado);
        }
        else
            printf("\n         No se puede realizar esa division porque el divisor es 0!!");  /* Si el divisor es igual a 0 muestra este mensaje de error */
        break;
    case 5:
        printf("\n         -> Introduzca el numero del cual desea calcular el factorial: ");
        scanf("%d",&A);
        int i;
        int fact;
        int n;
        for(i=1; i<=n; i++)
            fact = fact * i;
        printf("\nEl factorial del numero %d es %d",n,fact);
            break;
    case 6:   /* Salir */
        printf("\n                            Pulse ENTER para salir...");
        break;
    }
    return 0;
}
