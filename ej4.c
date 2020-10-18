/***************************************************************************//**
  @file     ej4.c
  @brief    Contiene las funciones necesarias 
  @author   Grupo 6
 ******************************************************************************/
/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/
#include "ej4.h"

/*******************************************************************************
 *******************************************************************************
                        GLOBAL FUNCTION DEFINITIONS
 *******************************************************************************
 ******************************************************************************/

int obtenerPalabra(char pal[]){
	char c;
	int i,h;
	int flag=0;
	while(flag == 0){
		h = 0;
		for(i=0;(c=getchar())!='\n';i++){

			if(c>= 'A' && c <= 'Z'){
	          pal[h]= (c +' ');
	          h++;
	        }
	      	if(c >= 'a' && c <= 'z'){
	          pal[h]= c;
	          h++;
	        }
	     }

	    if(i>LARGO_FRASE){
	        printf("SE SUPERO EL LARGO PERMITIDO PARA LA FRASE. No superar los %d caracteres.\nIngresar nuevamente una frase\n", LARGO_FRASE);
	    }else if(i<=LARGO_FRASE){
	    	flag=1;
	    }
	}

	return h; //devuelve el tamaño de la palabra limpia
}


int esPalindromo(char * palabra, int inicio, int final){  
	//caso base
	if (inicio >= final){
		return 1; // es Palíndroma
	} else if (palabra[inicio]!= palabra[final]){
		return 0;// no es Palíndroma
	}else{ // caso recursivo
		inicio++;
		final--;
		return esPalindromo(palabra,inicio,final);
	}
}