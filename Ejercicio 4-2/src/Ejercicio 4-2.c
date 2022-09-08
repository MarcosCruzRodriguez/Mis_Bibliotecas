/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 4-2 bibliotecas

 Realizar una función Suma que reciba como parámetros dos enteros (los que
 va a sumar) y un puntero a entero que guardara el resultado de esta. La función
 retorna 1 si pudo realizar la suma y cero en caso de no haberla podido realizar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "suma.h"

int main(void)
{
	setbuf(stdout, NULL);
	int numeroUno;
	int numeroDos;
	int retornoTotal;
	int estado;

	printf("Ingrese el primer numero: \n");
	scanf("%d",&numeroUno);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&numeroDos);

	estado = suma(numeroUno, numeroDos, &retornoTotal);
	if(estado == 1)
	{
		printf("La suma es: %d\n",retornoTotal);
	}
	else
	{
		printf("No se pudo realizar la suma\n");
	}


	return 0;
}
