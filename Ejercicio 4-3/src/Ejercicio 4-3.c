/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 4-3 bibliotecas

 Realizar un programa que permita la carga de temperaturas en Celsius y
 Fahrenheit, validando las temperaturas ingresadas estén entre el punto de
 congelación y de ebullición del agua para cada tipo de escala. Las validaciones
 se hacen en una biblioteca. Las funciones de conversión de Fahrenheit a Celsius
 y de Celsius a Fahrenheit se hacen en otra.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "temperaturas.h"

int main(void)
{
	setbuf(stdout, NULL);
	int estadoTipo;
	char tipoTemp;
	int estadoTemperatura;
	int grados;

	estadoTipo = tipoTemperatura(&tipoTemp);
	if(estadoTipo == 1)
	{
		printf("El tipo fue ingresado correctamente\n");
	}

	estadoTemperatura = temperatura(tipoTemp, &grados);
	if(estadoTemperatura == 1)
	{
		printf("La temperatura fue ingresada correctamente\n");
	}

	return 0;
}
