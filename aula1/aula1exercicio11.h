#include <stdio.h>

int aula1exercicio11(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 11");
	l();
	printc("Exercicio que mostra o uso de ponteiros");
	l();
    
    int variavel = 5;   // variável simples
    
    int *ponteiro;      // variável ponteiro
    
    ponteiro = &variavel;
    *ponteiro = *ponteiro + 2;
    
    printf("variavel = %d\n*ponteiro = %d\n",variavel,*ponteiro);
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
    
}

