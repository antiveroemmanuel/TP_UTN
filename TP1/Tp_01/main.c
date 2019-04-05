#include <stdio.h>
#include <stdlib.h>
#include "utn_operacionesMatematicas.h"

int utn_operacionesMatematicas(int* operacion);

int main()
{
int operacion;
do{
        printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
		printf("\n         บ::::::::::::::::: C A L C U L A D O R A :::::::::::::::::::บ");
		printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
		printf("\n         บ                                                           บ");
		printf("\n         บ       1.- Suma                     4.- Division           บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ       2.- Resta                    5.- Factorial          บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ       3.- Multiplicacion           6.- Salir              บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ                                                           บ");
		printf("\n         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
		printf("\n                     Nota: Solo funciona con numeros enteros");
		printf("\n");
		printf("\n                              Elija una opcion: \n");
        utn_operacionesMatematicas(&operacion);
}while(operacion != 6);
    return 0;
}
