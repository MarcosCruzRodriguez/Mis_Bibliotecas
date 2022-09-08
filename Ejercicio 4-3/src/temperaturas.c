/*
 * temperaturas.c
 *
 *  Created on: 8 sep. 2022
 *      Author: rodri
 */

#include <stdio.h>
#include <stdlib.h>

int tipoTemperatura(char* tipo)
{
	int retorno = 0;

	printf("\nIngrese el tipo de temperatura: \n"
			"En caso de que sea Celcius ingrese - c \n"
			"En caso de que sea Farenheit ingrese - f \n");
	scanf("%c",tipo);
	while(*tipo!='c' && *tipo!='f')
	{
		printf("\nIngrese el tipo de temperatura: \n"
				"En caso de que sea Celcius ingrese - c \n"
				"En caso de que sea Farenheit ingrese - f \n");
		scanf("%c",tipo);
	}

	retorno = 1;
	return retorno;
}

int temperatura(char tipo, int* gradosIngresados)
{
	int retorno = 0;

	switch(tipo)
	{
		case 'c':
			printf("Ingrese la temperatura Celcius\n");
			scanf("%d",gradosIngresados);
			while(*gradosIngresados < 0 || *gradosIngresados > 100)
			{
				printf("Reingrese la temperatura Celcius\n");
				scanf("%d",gradosIngresados);
			}
			break;
		case 'f':
			printf("Ingrese la temperatura Farenheit\n");
			scanf("%d",gradosIngresados);
			while(*gradosIngresados < 32 || *gradosIngresados > 212)
			{
				printf("Reingrese la temperatura Farenheit\n");
				scanf("%d",gradosIngresados);
			}
			break;
	}

	retorno = 1;
	return retorno;
}

