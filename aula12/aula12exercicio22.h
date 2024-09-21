#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isEspelho(Arv, Arv);

int aula12exercicio22(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 22");
	l();
	printc("Programa que verifica se uma arvore");
	printc("eh o espelho da outra.");
	l();
	srand(time(NULL));
	Arv A = balanceada(9);
	Arv B = espelho(A);
	
	printf("Exibicao da arvore A:\n");
	exibeArv(A,0);
	
	printf("\nExibicao arvore B:\n");
	exibeArv(B,0);

	puts("");
	
	if (isEspelho(A,B)){
		printf("A eh espelho de B!!\n");
	} else {
		printf("A NAO eh espelho de B!!\n");
	}
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

int isEspelho(Arv A, Arv B){
	
	if (A == NULL && B == NULL){
		return 1;
	}
	
	if (A == NULL || B == NULL){
		return 0;
	}
	
	if (A->item != B->item){
		return 0;
	}
	
	return isEspelho(A->esquerda, B->direita) && isEspelho(A->direita, B->esquerda);
	
}
