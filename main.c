/***************************************************************************//**
  @file     main.c
  @brief    Detecta si una frase ingrasada es un palindromo o no
  @author   Grupo 6
 ******************************************************************************/
/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/
#include "ej4.h"

/*******************************************************************************
 *******************************************************************************
                        LOCAL FUNCTION DEFINITIONS
 *******************************************************************************
 ******************************************************************************/

int main(void)
{

	char pal[LARGO_FRASE];
	int res;
	printf("Ingresar frase seguida de un enter\n");
	int largo = obtenerPalabra(pal);
	res = esPalindromo(pal,0,largo-1);
	if(res==1){
		printf("La frase ingresada es un palíndromo\n");
	}else{
		printf("La frase ingresada NO es un palíndromo\n");
	}
	return 0;
}

