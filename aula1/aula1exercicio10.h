#include <stdio.h>

typedef struct { float x; float y; } Ponto;

int aula1exercicio10(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 10");
	l();
	printc("Programa que faz a implementacao do typedef struct, ");
	printc("e mostra na tela");
	printc("'typedef struct{float x; float y;} Ponto'");
	l();
	
    Ponto p = {1.5,2.5};
    printf("(%.1f,%.1f)\n",p.x,p.y);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
