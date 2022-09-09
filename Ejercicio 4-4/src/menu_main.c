/*
 * menu_main.c
 *
 *  Created on: 8 sep. 2022
 *      Author: rodri
 */

#include <stdio.h>
#include <stdlib.h>

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
