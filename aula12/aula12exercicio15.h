#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void posordem(Arv);

int aula12exercicio15(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 15");
	l();
	printc("Programa que mostra o percurso de uma");
	printc("arvore em pos ordem.");
	l();
	
	srand(time(NULL));
	Arv A = balanceada(9);
	
	printf("EXERCICIO 15\n\n");
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	printf("\nPercurso da arvore em POS ordem :\n");
	posordem(A);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

void posordem(Arv A){
	
	if (A == NULL){
		return;
	}
	
	posordem(A->esquerda);
	posordem(A->direita);
	printf("[%i] ", A->item);
	
}

