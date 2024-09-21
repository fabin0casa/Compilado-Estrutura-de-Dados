#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void destroi(Arv*);

int aula12exercicio18(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 18");
	l();
	printc("Programa que implementa a funcao de");
	printc("destruir a arvore.");
	l();
	
	srand(time(NULL));
	Arv A = balanceada(9);
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	puts("");
	destroiArv(&A);
	
	printf("\nArvore destruida.\n");
	exibeArv(A,0);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

void destroiArv(Arv *A){
	
	if (*A == NULL){
		return;
	}
	
	destroiArv(&(*A)->esquerda);
	destroiArv(&(*A)->direita);
	
	printf("Destruindo no com item %i\n", (*A)->item);

    free(*A);
    *A = NULL;
}

