#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preordem(Arv);

int aula12exercicio13(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 13");
	l();
	printc("Programa que mostra o percurso de uma");
	printc("arvore em pre ordem.");
	l();
	srand(time(NULL));
	Arv A = balanceada(9);
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	printf("\nPercurso da arvore em PRE ordem :\n");
	preordem(A);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

void preordem(Arv A){
	
	if (A == NULL){
		return;
	}
	
	printf("[%i] ", A->item);
	preordem(A->esquerda);
	preordem(A->direita);
	
}

