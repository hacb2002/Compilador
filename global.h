/*
Código adaptado del libro 'Compiladores Principios, técnicas y herramientas' 
de los autores: Alfred V. Aho y Ravi Sethi, primera edición, 1990
de la editorial: Addison Wesley Iberoamericana, S.A., de las páginas: 74 - 79

Por Crisostomo Bonilla Héctor Alexis
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define TAMBUFF 128
#define NINGUNO -1
#define FDC '\0'

#define NUM 256
#define DIV 257
#define MOD 258
#define ID 259
#define FIN 260

extern int valcomplex; // Declaración como extern
extern int numlinea;
struct entrada {
    char *aplex;
    int complex;
};
extern int pila[1000];
extern struct entrada tablasimb[];
extern int ultent;
extern char lexemas[];
extern int ultcar;

// Prototipos de funciones
int analex();
void analsint();
void expr();
void termino();
void factor();
void parea(int t);
void emite(int t, int tval);
void error(char *m);
void inic();
int busca(char s[]);
int inserta(char s[], int clex);
