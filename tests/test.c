/***************************************************************************//**
  @file     test.c
  @brief    Testea la funcion de esPalindromo
  @author   Grupo 6
 ******************************************************************************/
/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/
#include "ej4.h"

void check_palindromo(char*,int,int);
int pruebas_nopasadas=0;

void check_palindromo(char* palabra,int largo,int resultado_esperado) 
{
    int resultado_obtenido = esPalindromo(palabra,0,largo);//Corre la funcion con la palabra enviada
    if(resultado_obtenido!=resultado_esperado) //Si el resultado esperado es diferente al obtenido se avisa del error
    {
    pruebas_nopasadas++;
    printf("ERROR con la frase: %s\n",palabra);
    }
}

int main(void) 
{
    
check_palindromo("anana",4,1);//Caso1: palabra impar palindroma
check_palindromo("impar",4,0);//Caso2: palabra impar no palindroma
check_palindromo("allivessevilla",13,1);//Caso3: palabra par palindroma
check_palindromo("zapallitos",9,0);//Caso4: palabra par no palindroma
printf("Total de errores:%d\n",pruebas_nopasadas);
 return 0;
}
