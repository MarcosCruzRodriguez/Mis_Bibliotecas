/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 4-4

  Hacer el menú de un programa en el MAIN con las siguientes opciones:
 	 1. Loguearse
 	 2. Comprar
 	 3. Ver mis compras
 	 4. Vender
 	 5. Salir
  Al menú anterior chequear que no pueda ingresar a ninguna opción si no se logueó.
  Ahora agregamos, chequear que no pueda ver sus compras, si no ingresó primero a
 comprar al menos una vez.
  Cuando se ingresa a la opción vender del menú, debe abrirse otro menú que contenga:
 	 1. Vender
 	 2. Hacer factura
 	 3. Volver atrás.
  A lo anterior sumarle que haya compras para poder vender. (Si compré una vez y vendí
 una vez no puedo ingresar a vender).
  Pasar las acciones de menú a funciones y llevarlas a una biblioteca
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu_main.h"

int main(void)
{
	setbuf(stdout, NULL);
	int opcion;

	do
	{
		menuMain(&opcion);

		switch(opcion)
		{
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;

			case 4:

				break;

			case 5:

				break;
			default:

				break;
		}

	}
	while(opcion != 5);

	return 0;
}
