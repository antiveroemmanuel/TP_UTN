#include <stdio.h>
#include <stdlib.h>
#include "utn_operacionesMatematicas.h"

int utn_operacionesMatematicas(int* operacion);

int main()
{
int operacion;
do{
        printf("\n         �����������������������������������������������������������ͻ");
		printf("\n         �::::::::::::::::: C A L C U L A D O R A :::::::::::::::::::�");
		printf("\n         �����������������������������������������������������������͹");
		printf("\n         �                                                           �");
		printf("\n         �       1.- Suma                     4.- Division           �");
		printf("\n         �                                                           �");
		printf("\n         �       2.- Resta                    5.- Factorial          �");
		printf("\n         �                                                           �");
		printf("\n         �       3.- Multiplicacion           6.- Salir              �");
		printf("\n         �                                                           �");
		printf("\n         �                                                           �");
		printf("\n         �����������������������������������������������������������ͼ");
		printf("\n                     Nota: Solo funciona con numeros enteros");
		printf("\n");
		printf("\n                              Elija una opcion: \n");
        utn_operacionesMatematicas(&operacion);
}while(operacion != 6);
    return 0;
}
