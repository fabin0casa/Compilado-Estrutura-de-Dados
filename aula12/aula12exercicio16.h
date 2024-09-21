#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void emOrdemInversa(Arv);

int aula12exercicio16(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 16");
	l();
	printc("Programa que mostra o percurso de uma");
	printc("arvore em ordem inversa.");
	l();
	
	srand(time(NULL));
	Arv A = balanceada(9);
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	printf("\nPercurso da arvore em ordem inversa:\n");
	emOrdemInversa(A);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

void emOrdemInversa(Arv A){
	
	if (A == NULL){
		return;
	}
	
	emOrdemInversa(A->direita);
	printf("[%i] ", A->item);
	emOrdemInversa(A->esquerda);
	
}
