/*
 * menu_main.c
 *
 *  Created on: 8 sep. 2022
 *      Author: rodri
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void menuMain(int* eleccion)
{
	printf("\nBienvenido al menu MAIN: \n"
				"1. Loguearse \n"
				"2. Comprar \n"
				"3. Ver mis compras \n"
				"4. Vender \n"
				"5. Salir \n" );

	printf("Ingrese una opcion del menu: \n");
	scanf("%d",eleccion);
}

int loguearse(char* user, int* password)
{
	int retorno = 0;
	char seguro;

	printf("Ingrese el primer caracter con el que comienza su usuario: \n");
	fflush(stdin);
	scanf("%c",user);
	*user = tolower(*user);
	printf("Ingrese su contraseña: \n");
	scanf("%d",password);

	printf("\nEsta seguro de ingresar estos datos? Si lo esta ingrese s: \n");
	fflush(stdin);
	scanf("%c",&seguro);
	seguro = tolower(seguro);
	if(seguro == 's')
	{
		retorno = 1;
	}
	return retorno;
}

int compras(int* compra)
{
	int retorno = 0;
	int acumuladorCompra = 0;

	printf("Ingrese el valor del producto que comprara: \n");
	scanf("%d",compra);

	acumuladorCompra += *compra;
	if(acumuladorCompra != 0)
	{
		retorno = 1;
	}
	return retorno;
}

int vender(int* eleccion)
{
	int retorno = 0;
	int seguro;

	printf("\nHas ingresado al menu de ventas: \n"
				"1. Vender \n"
				"2. Hacer factura \n"
				"3. Volver atras \n");
	printf("Ingrese una opcion del menu: \n");
	scanf("%d",eleccion);

	printf("\nEsta seguro de la desicion tomada? Si es asi ingrese s: \n");
	fflush(stdin);
	scanf("%d",&seguro);
	seguro = tolower(seguro);
	if(seguro == 's')
	{
		retorno = 1;
	}
	return retorno;
}
