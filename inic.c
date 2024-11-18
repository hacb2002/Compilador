/*
Código adaptado del libro 'Compiladores Principios, técnicas y herramientas' 
de los autores: Alfred V. Aho y Ravi Sethi, primera edición, 1990
de la editorial: Addison Wesley Iberoamericana, S.A., de las páginas: 74 - 79

Por Crisostomo Bonilla Héctor Alexis
*/

//Archivo inic.c
#include "global.h"

struct entrada palsclave[] = {
    {"div", DIV},
    {"mod", MOD},
    {0, 0}
};

void inic()
{
    struct entrada *p;
    for (p = palsclave; p->complex; p++)
        inserta(p->aplex, p->complex);
}

