/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 4-1 bibliotecas

 Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
 un número. Utilizar la función de PedirNumero de la ejercitación 3. Por ejemplo:
 5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedir_num.h"

int main(void)
{
	setbuf(stdout, NULL);
	int numeroRetornado;
	int factorial;
	int funciona;

	factorial = 1;

	funciona = pedirNumero(&numeroRetornado);

	if(funciona == 1)
	{
		printf("Funciona todo correctamente\n");
	}

	while(numeroRetornado > 1)
	{
		factorial *= numeroRetornado;
		numeroRetornado--;
	}
	printf("Factorial del numero es: %d\n", factorial);

	return 0;
}
