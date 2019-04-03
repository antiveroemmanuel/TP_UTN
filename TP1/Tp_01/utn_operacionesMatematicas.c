#include <stdio.h>
#include <stdlib.h>



int utn_operacionesMatematicas(int'+', int'-', int'*', int'/', int'!')
{
    int resultado;
    int x;
    int y;
    char opcion;

		switch(opcion)  /* Segun la opcion elegida tendremos los siguientes casos...*/{

			case '+':     /* Suma */

			printf("\n         -> Introduzca el primer sumando: ");

			scanf("%i",&x);

			printf("\n         -> Introduzca el segundo sumando: ");

			scanf("%i",&y);

			resultado=x+y;

			printf("\n         La SUMA de %i + %i es igual a %i",x,y,resultado);

			break;



			case '-':     /* Resta */

			printf("\n         -> Introduzca el primer numero: ");

			scanf("%i",&x);

			printf("\n         -> Introduzca el segundo numero: ");

			scanf("%i",&y);

			resultado=x-y;

			printf("\n         La RESTA de %i - %i es igual a %i",x,y,resultado);

			break;


			case '*':     /* Multiplicacion */

			printf("\n         -> Introduzca el primer multiplicando: ");

			scanf("%i",&x);

			printf("\n         -> Introduzca el segundo multiplicando: ");

			scanf("%i",&y);

			resultado=x*y;

			printf("\n         La MULTIPLICACION de %i * %i es igual a %i",x,y,resultado);

			break;



			case '/':     /* Division */

			printf("\n         -> Introduzca el dividendo: ");

			scanf("%i",&x);

			printf("\n         -> Introduzca el divisor: ");

			scanf("%i",&y);

			if (y!=0)  /* Si el divisor es distinto de 0 realizara la operacion */

			{

				resultado=x/y;

				printf("\n         El cociente de la DIVISION de %i entre %i es igual a %i",a,b,resultado);

			}

			else printf("\n         No se puede realizar esa division porque el divisor es 0!!");  /* Si el divisor es igual a 0 muestra este mensaje de error */

			break;



			case '!':

            int i;
            fact = 1;
            n;
			printf("\n         -> Introduzca el numero del cual desea calcular el factorial: ");

			scanf("%i",&x);

			for(i=1;i<=n;i++)
                fact = fact * i;
                printf("\nEl factorial del numero %d es %d",n,fact);
                getch();


            break;

			case 6:   /* Salir */



			cprintf("\n                            Pulse ENTER para salir...");

			break;

		}
}
