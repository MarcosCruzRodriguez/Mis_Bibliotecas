/*
 * input_data.c
 *
 *  Created on: 8 sep. 2022
 *      Author: rodri
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char menu(void)
{
	char opcion;

	printf("\nMenu principal: \n"
			"a- Iniciar \n"
			"b- Procesar \n"
			"c- Finalizar \n"
			"d- Salir \n");

	printf("\nIngrese una opcion: ");
	fflush(stdin);
	scanf("%c",&opcion);
	opcion = tolower(opcion);

	return opcion;
}

void procesar(char opcion)
{
	printf("\nSu opcion ingresada es: %c",opcion);
	printf("\nEsta realizando un proceso");
}

void finalizar(char opcion)
{
	printf("\nSu opcion ingresada es: %c",opcion);
	printf("\nEsta finalizando un proceso");
}

char seguroExit(void)
{
	char salida;

	printf("\nEsta seguro que deseas salir?\n"
			"\nIngrese -d- para salir: ");
	fflush(stdin);
	scanf("%c",&salida);
	salida = tolower(salida);

	if(salida != 'd')
	{
		printf("\nVolvemos al menu principal");
	}
	else
	{
		printf("\nUsted esta finalizando el programa");
	}

	return salida;
}
