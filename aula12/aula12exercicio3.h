#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Arv completa(int);

int aula12exercicio3()
{
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 3");
	l();
	printc("Implementacao de funcao para a criacao");
	printc("de uma arvore completa.");
	l();
    
    printf("Exibicao da arvore:\n\n");
    
    srand(time(NULL));
    Arv A = completa(3);
    exibeArv(A,0);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

Arv completa(int h) {
	if(h == 0){
		return NULL;
	}
	
	return criaArv(completa(h-1), rand()%100, completa(h-1));
}
