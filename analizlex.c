/*
Código adaptado del libro 'Compiladores Principios, técnicas y herramientas' 
de los autores: Alfred V. Aho y Ravi Sethi, primera edición, 1990
de la editorial: Addison Wesley Iberoamericana, S.A., de las páginas: 74 - 79

Por Crisostomo Bonilla Héctor Alexis
*/

#include "global.h"
char buflex[TAMBUFF];
int numlinea = 1;
int valcomplex = NINGUNO;
int analex() //analizador lexico
{
    int t;

    while(1){
        t = getchar();
        if(t == ' ' || t == '\t') // Elimina los espacios en blanco y saltos tabuladores
            ;
        else if (t == '\n')
            numlinea = numlinea + 1;
        else if(isdigit(t)){ // t es un digito
            ungetc(t, stdin);
            scanf("%d", &valcomplex);
            return NUM;
        }
        else if(isalpha(t)){ // t es una letra
            int p, b = 0;
            while(isalnum(t)){
                buflex[b] = t;
                t = getchar();
                b = b + 1;
                if(b >= TAMBUFF){
                    error("error del compilador");
                }
            }
            buflex[b] = FDC;
            if(t != EOF)
                ungetc(t, stdin);
            p = busca(buflex);
            if(p == 0)
                p = inserta(buflex, ID);
            valcomplex = p;
            return tablasimb[p].complex;
        }
        else if(t == EOF)
            return FIN;
        else{
            valcomplex = NINGUNO;
            return t;
        }
    }
}
