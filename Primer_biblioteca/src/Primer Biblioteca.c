/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio practica / Bibliotecas

 Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
 Nota:
 -Antes de salir preguntar si "esta seguro que desea salir?s/n"
 -Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
 -Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
 -Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input_data.h"

int main(void)
{
	setbuf(stdout, NULL);
	char opcion;
	int banderaIniciar;
	int banderaProcesar;

	opcion = 'm';
	banderaIniciar = 0;
	banderaProcesar = 0;

	while(opcion != 'd')
	{
		opcion = menu();
		switch(opcion)
		{
			case 'a':
				printf("\nAcaba de iniciar");
				banderaIniciar = 1;
				break;
			case 'b':
				if(banderaIniciar == 0)
				{
					printf("\nDebe Iniciar antes de Procesar");
				}
				else
				{
					procesar(opcion);
				}
				banderaProcesar = 1;
				break;
			case 'c':
				if(banderaIniciar == 0)
				{
					printf("\nDebe Iniciar antes de Finalizar");
				}
				if(banderaProcesar == 0)
				{
					printf("\nDebe Procesar antes de Finalizar");
				}
				else
				{
					finalizar(opcion);
				}
				break;
			case 'd':
				opcion = seguroExit();
				break;
			default:
				printf("\nEsa opcion no existe");
				break;
		}
	}

	return 0;
}
