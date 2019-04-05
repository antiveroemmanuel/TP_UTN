#include <stdio.h>
#include <stdlib.h>
#include "utn_operacionesMatematicas.h"
#include <conio.h>

int utn_operacionesMatematicas(int* operacion)
{
    int resultado;
    int A;
    int B;
    int i;
    int fact=1;
    int n;
    do
    {
        printf( "\nElige una operacion: ");
        scanf( "%d", operacion);
    }
    while ( *operacion < 1 || *operacion > 6 );

    switch(*operacion)  /* Segun la opcion elegida tendremos los siguientes casos...*/
    {
    case 1:     /* Suma */
            //param Se solicita el ingreso de dos numeros enteros
            //param Devuelve un numero entero
            //return Devuelve la suma de dos enteros
        printf("\nSUMA \n\n     ->Introduzca el primer sumando: ");
        scanf("%d",&A);
        printf("\n      ->Introduzca el segundo sumando: ");
        scanf("%d",&B);
        resultado=A+B;
        printf("\n La SUMA de %d + %d es igual a %i\n",A,B,resultado);
        break;
    case 2:     /* Resta */
            //param Se solicita el ingreso de dos numeros enteros
            //param Devuelve un numero entero
            //return Devuelve la resta de dos enteros
        printf("\nRESTA: \n\n-> Introduzca el primer numero: ");
        scanf("%d",&A);
        printf("\n > Introduzca el segundo numero: ");
        scanf("%i",&B);
        resultado=A-B;
        printf("\nLa RESTA de %d - %d es igual a %d\n",A,B,resultado);
        break;
    case 3:     /* Multiplicacion */
            //param Se solicita el ingreso de dos numeros enteros
            //param Devuelve un numero entero
            //return Devuelve el producto de dos enteros
        printf("\nMULTIPLICACION \n\n         -> Introduzca el primer multiplicando: ");
        scanf("%d",&A);
        printf("\n         -> Introduzca el segundo multiplicando: ");
        scanf("%i",&B);
        resultado=A*B;
        printf("\n         La MULTIPLICACION de %d * %d es igual a %d",A,B,resultado);
        break;
    case 4:     /* Division */
            //param Se solicita el ingreso de dos numeros enteros
            //param Devuelve un numero entero
            //return Devuelve la division de dos enteros
        printf("\nDIVISION \n\n         -> Introduzca el dividendo: ");
        scanf("%d",&A);
        printf("\n         -> Introduzca el divisor: ");
        scanf("%d",&B);
        if (B!=0)  /* Si el divisor es distinto de 0 realizara la operacion */
        {
            resultado=A/B;
            printf("\n         El cociente de la DIVISION de %d entre %d es igual a %d\n",A,B,resultado);
        }
        else
            printf("\n         No se puede realizar esa division porque el divisor es 0!!\n");  /* Si el divisor es igual a 0 muestra este mensaje de error */
        break;
    case 5:
            //param Se solicita el ingreso de un numero entero
            //param Devuelve un numero entero
            //return Devuelve el factor de un entero
        printf("\nFACTORIAL \n\n         -> Introduzca el numero del cual desea calcular el factorial: ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        printf("\nEl factorial del numero %d es %d\n",n,fact);
        getch();
        break;
    case 6:   /* Salir */
        printf("\n                            Pulse ENTER para salir...\n\n");
        break;
    }
    return 0;
}
