#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void poda(Arv*);

int aula12exercicio17(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 17");
	l();
	printc("Programa que implementa a funcao de");
	printc("podar a arvore.");
	l();
	
	srand(time(NULL));
	Arv A = balanceada(9);
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	poda(&A);
	printf("\nArvore apos a poda das folhas:\n");
	exibeArv(A,0);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

void poda(Arv *A){

	if (*A == NULL){
		return;
	}

	if ((*A)->esquerda == NULL && (*A)->direita == NULL){
	    free(*A);
	    *A = NULL;
	    return;
	}
	
    poda(&(*A)->esquerda);
    poda(&(*A)->direita);
}

