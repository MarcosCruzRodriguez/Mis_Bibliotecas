/*
 * temperaturas.c
 *
 *  Created on: 8 sep. 2022
 *      Author: rodri
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int tipoTemperatura(char* tipo)
{
	int retorno = 0;

	printf("\nIngrese el tipo de temperatura: \n"
			"En caso de que sea Celcius ingrese - c \n"
			"En caso de que sea Fahrenheit ingrese - f \n");
	fflush(stdin);
	scanf("%c",tipo);
	*tipo = tolower(*tipo);
	while(*tipo!='c' && *tipo!='f')
	{
		printf("\nIngrese el tipo de temperatura: \n"
				"En caso de que sea Celcius ingrese - c \n"
				"En caso de que sea Fahrenheit ingrese - f \n");
		fflush(stdin);
		scanf("%c",tipo);
		*tipo = tolower(*tipo);

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
			printf("Ingrese la temperatura Fahrenheit\n");
			scanf("%d",gradosIngresados);
			while(*gradosIngresados < 32 || *gradosIngresados > 212)
			{
				printf("Reingrese la temperatura Fahrenheit\n");
				scanf("%d",gradosIngresados);
			}
			break;
	}

	retorno = 1;
	return retorno;
}

void conversionTemperatura(int tipo, int gradosIngresados)
{
	switch(tipo)
	{
		float conversionTemperatura;

		case 'c':
			conversionTemperatura = (gradosIngresados * 9/5) + 32;
			printf("La conversion de Celcius a Fahrenheit es: %.2f",conversionTemperatura);
			break;
		case 'f':
			conversionTemperatura = (gradosIngresados - 32) * 5/9;
			printf("La conversion de Fahrenheit a Celcius es: %.2f",conversionTemperatura);
			break;
	}
}

