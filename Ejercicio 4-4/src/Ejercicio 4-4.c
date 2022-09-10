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
#include <ctype.h>
#include "menu_main.h"

int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int opcionVentas;
	int errorLoguearse;
	char usuario;
	int contra;
	int banderaLogearse;
	int banderaVerCompras;
	int banderaCompras;
	int errorVentas;
	int acumuladorCompras;

	banderaLogearse = 0;
	banderaVerCompras = 0;
	banderaCompras = 0;

	do
	{
		menuMain(&opcion);

		switch(opcion)
		{
			case 1:
				errorLoguearse = loguearse(&usuario, &contra);
				if(errorLoguearse == 1)
				{
					printf("\nSe ah logeado correctamente: \n");
					printf("Su usuario es -> %c\nSu contraseña es -> %d\n",usuario,contra);
				}
				banderaLogearse = 1;
				break;
			case 2:
				if(banderaLogearse == 1)
				{
					compras(&acumuladorCompras);
				}
				banderaVerCompras = 1;
				banderaCompras = 1;
				break;
			case 3:
				if(banderaLogearse == 1)
				{
					if(banderaVerCompras == 1)
					{
						printf("Usted esta gastando un total de: %d\n",acumuladorCompras);
					}
				}
				break;
			case 4:
				if(banderaLogearse == 1 && banderaCompras == 1)
				{
					errorVentas = vender(&opcionVentas);
					if(errorVentas == 1)
					{
						switch(opcionVentas)
						{
							case 1:
								printf("Usted esta vendiendo lo comprado\n");
								acumuladorCompras = 0;
								banderaCompras = 0;
								break;
							case 2:
								printf("Se le entrego la factura\n");
								break;
							case 3:
								printf("Usted a vuelto al menu MAIN\n");
								break;
							default:
								printf("Esa opcion elegida no es valida\n");
								break;
						}
					}
				}
				else
				{
				    printf("No se ha podido ingresar a ventas, \n"
				            "primero necesita tener una compra hecha \n");
				}
				break;
			case 5:
				if(banderaLogearse == 1)
				{
					printf("Esta seguro de salir del menu MAIN? \n"
							"Si es asi reingrese 5: ");
					scanf("%d",&opcion);
				}
				break;
			default:
				printf("Esa opcion elegida no es valida\n");
				break;
		}

	}
	while(opcion != 5);

	printf("Usted salio exitosamente del menu MAIN\n");

	return 0;
}
