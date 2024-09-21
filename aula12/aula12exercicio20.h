#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int iguais(Arv, Arv);

int aula12exercicio20(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 20");
	l();
	printc("Programa que faz uma comparacao para ");
	printc("ver se as arvores sao iguais.");
	l();
	
	srand(time(NULL));
	Arv A = balanceada(9);
	Arv B = clone(A);
	Arv C = balanceada(5);
	
	printf("Exibicao da arvore A:\n");
	exibeArv(A,0);
	
	printf("\nExibicao arvore B:\n");
	exibeArv(B,0);
	
	printf("\nExibicao arvore C:\n");
	exibeArv(C,0);
	
	puts("");
	
	if (iguais(A,B)){
		printf("A e B sao IGUAIS!!\n");
	} else {
		printf("A e B sao DIFERENTES!!\n");
	}
	
	if (iguais(A,C)){
		printf("A e C sao IGUAIS!!\n");
	} else {
		printf("A e C sao DIFERENTES!!\n");
	}
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

int iguais(Arv A, Arv B){
	
	if (A == NULL && B == NULL){
		return 1;
	}
	
	if (A == NULL || B == NULL){
		return 0;
	}
	
	if (A->item != B->item){
		return 0;
	}
	
	return iguais(A->esquerda, B->esquerda) && iguais(A->direita, B->direita);
	
}

