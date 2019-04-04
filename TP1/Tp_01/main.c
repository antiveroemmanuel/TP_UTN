#include <stdio.h>
#include <stdlib.h>
#include "utn_operacionesMatematicas.h"

int utn_operacionesMatematicas(operacion);

int main()
{
    int operacion;
    printf("Seleccione una operacion (1-suma, 2-Resta, 3-Multiplicacion, 4-Division, 5-Factorial, 6-SALIR):\n\n\t ");
    utn_operacionesMatematicas(operacion);
    return 0;
}
