/*
Código adaptado del libro 'Compiladores Principios, técnicas y herramientas' 
de los autores: Alfred V. Aho y Ravi Sethi, primera edición, 1990
de la editorial: Addison Wesley Iberoamericana, S.A., de las páginas: 74 - 79

Por Crisostomo Bonilla Héctor Alexis
*/

//Archivo error.c
#include "global.h"
void error(char *m)
{
    fprintf(stderr, "linea %d: %s\n", numlinea, m);
    exit(1);
}

