#Código adaptado del libro 'Compiladores Principios, técnicas y herramientas' 
#de los autores: Alfred V. Aho y Ravi Sethi, primera edición, 1990
#de la editorial: Addison Wesley Iberoamericana, S.A., de las páginas: 74 - 79

#Por Crisostomo Bonilla Héctor Alexis

analizlex.o:
	gcc -c analizlex.c -o analizlex.o
emisor.o:
	gcc -c emisor.c -o emisor.o
simbolos.o:
	gcc -c simbolos.c -o simbolos.o
analizsint.o:
	gcc -c analizsint.c -o analizsint.o
error.o:
	gcc -c error.c -o error.o
inic.o:
	gcc -c inic.c -o inic.o
principal.o:
	gcc -c principal.c -o principal.o
principal.exe: analizlex.o emisor.o simbolos.o analizsint.o error.o inic.o principal.o 
	gcc -Wall -g analizlex.o  analizsint.o  emisor.o  error.o  inic.o simbolos.o principal.o -o principal.exe
exe:
	./principal.exe
clean: 
	rm *.o *.exe
