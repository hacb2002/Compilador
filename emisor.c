/*
Código adaptado del libro 'Compiladores Principios, técnicas y herramientas' 
de los autores: Alfred V. Aho y Ravi Sethi, primera edición, 1990
de la editorial: Addison Wesley Iberoamericana, S.A., de las páginas: 74 - 79

Por Crisostomo Bonilla Héctor Alexis
*/


//Archivo emisor.c
#include "global.h"
int i = 0;
int pila[1000] = {};

void emite(int t, int tval)
{
    int a, b, j;
    switch(t){
        case '+': case '-': case '*': case '/':
            printf("%c\n", t); 
            a = pila[i-1];
            b = pila[i-2];
            j = i-2;
            if(t == '+'){
                pila[j] = a+b;
            }else if(t == '-'){
                pila[j] = a-b;
            }else if(t == '*'){
                pila[j] = a*b;
            }else if(t == '/'){
                pila[j] = a/b;
            }
            i = j+1;
            if(i == 1) printf("Resultado: %d", pila[0]);
            break;
        case DIV:
            printf("DIV\n"); 
            a = pila[i-1];
            b = pila[i-2];
            j = i-2;
            if(t == '/'){
                pila[j] = a/b;
            }
            i = j+1;
            
            break;
        case MOD:
            printf("MOD\n"); break;
            a = pila[i-1];
            b = pila[i-2];
            j = i-2;
            pila[j] = a%b;
            i = j+1;
        case NUM: 
            printf("%d\n", tval); 
            pila[i++] = tval;
            break;
        case ID:
            printf("%s\n", tablasimb[tval].aplex); break;
        default:
            printf("complex %d, valcomplex %d\n", t, tval);
    }
}
