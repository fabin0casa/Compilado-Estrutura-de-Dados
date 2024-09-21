#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void emordem(Arv);

int aula12exercicio14(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 14");
	l();
	printc("Programa que mostra o percurso de uma");
	printc("arvore em ordem.");
	l();
	
	srand(time(NULL));
	Arv A = balanceada(9);
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	printf("\nPercurso da arvore em ordem :\n");
	emordem(A);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

void emordem(Arv A){
	
	if (A == NULL){
		return;
	}
	
	emordem(A->esquerda);
	printf("[%i] ", A->item);
	emordem(A->direita);
	
}
