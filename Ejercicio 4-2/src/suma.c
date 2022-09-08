/*
 * suma.c
 *
 *  Created on: 8 sep. 2022
 *      Author: rodri
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int primerNumero, int segundoNumero, int* resultado)
{
	int retorno = 0;

	*resultado = primerNumero + segundoNumero;

	retorno = 1;
	return retorno;
}
