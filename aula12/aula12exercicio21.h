#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Arv espelho(Arv);

int aula12exercicio21(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 21");
	l();
	printc("Programa que faz uma espelho");
	printc("de uma arvore.");
	l();
	
	srand(time(NULL));
	Arv A = balanceada(9);
	
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	printf("\nExibicao da copia da arvore espelhada:\n");
	exibeArv(espelho(A),0);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

Arv espelho(Arv A){
	
	if (A == NULL){
		return NULL;
	}
	
	return criaArv(espelho(A->direita), A->item, espelho(A->esquerda));
}



