#include <stdio.h>
#include <stdlib.h>

int aula8exercicio1(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 1");
	l();
	printc("Programa para criacao e exibicao de uma Lista.");
	l();

    Lista I = criaNo(3,criaNo(1,criaNo(5,NULL)));
    exibeLista(I);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
