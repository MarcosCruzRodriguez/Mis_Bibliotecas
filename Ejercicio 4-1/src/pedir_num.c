/*
 * pedir_num.c
 *
 *  Created on: 8 sep. 2022
 *      Author: rodri
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(int* numero)
{
	int retorno = 0;

	printf("Ingrese un numero: \n");
	scanf("%d",numero);

	retorno = 1;
	return retorno;
}
