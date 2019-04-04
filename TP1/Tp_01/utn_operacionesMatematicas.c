#include <stdio.h>
#include <stdlib.h>
#include "utn_operacionesMatematicas.h"

int utn_operacionesMatematicas(int'+', int'-', int'*', int'/', int'!')
{
    int resultado;
    int A;
    int B;
    char opcion;

    switch(opcion)  /* Segun la opcion elegida tendremos los siguientes casos...*/
    {

    case '+':     /* Suma */
        printf("\n         -> Introduzca el primer sumando: ");
        scanf("%i",&A);
        printf("\n         -> Introduzca el segundo sumando: ");
        scanf("%i",&B);
        resultado=A+B;
        printf("\n         La SUMA de %d + %d es igual a %i",A,B,resultado);
        break;
    case '-':     /* Resta */
        printf("\n         -> Introduzca el primer numero: ");
        scanf("%d",&A);
        printf("\n         -> Introduzca el segundo numero: ");
        scanf("%i",&B);
        resultado=A-B;
        printf("\n         La RESTA de %d - %d es igual a %d",A,B,resultado);
        break;
    case '*':     /* Multiplicacion */
        printf("\n         -> Introduzca el primer multiplicando: ");
        scanf("%d",&A);
        printf("\n         -> Introduzca el segundo multiplicando: ");
        scanf("%i",&B);
        resultado=A*B;
        printf("\n         La MULTIPLICACION de %d * %d es igual a %d",A,B,resultado);
        break;
    case '/':     /* Division */
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
    case '!':
        int i;
        fact = 1;
        n;
        printf("\n         -> Introduzca el numero del cual desea calcular el factorial: ");
        scanf("%d",&A);
        for(i=1; i<=n; i++)
            fact = fact * i;
        printf("\nEl factorial del numero %d es %d",n,fact);
        getch();
        break;
    case 6:   /* Salir */
        printf("\n                            Pulse ENTER para salir...");
        break;
    }
    return 0;
}
