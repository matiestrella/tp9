/***************************************************************************//**
  @file     ej4
  @brief    Contiene los prototipos de las funciones que debe usar ej.c y main.c
  @author   Grupo 6
 ******************************************************************************/

#ifndef _EJ4_H_
#define _EJ4_H_

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/

#define LARGO_FRASE 200


/*******************************************************************************
 * FUNCTION PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/

/**
 * @brief Analiza si la frase ingresada es un palindromo
 * @param param1 Frase que se desea analizar
 * @param param2 Posicion inicial de la cual se analiza la frase
 * @param param2 Cantidad de letras que liene la frase
 * @return Devuelve un 1 si la frase es un palindromo y un 0 en el caso que no
*/
int esPalindromo(char * palabra, int inicio, int final);

/**
 * @brief limpia la frase y devuelve el largo de la misma
 * @param param1 Frase que se desea limpiar
 * @return Largo de la frase (modificada)
*/
int obtenerPalabra(char pal[]);


/*******************************************************************************
 ******************************************************************************/

#endif // _EJ4_H_