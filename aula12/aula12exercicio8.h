#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int folhas(Arv);

int aula12exercicio8(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 8");
	l();
	printc("Programa que calcula a quantidade de");
	printc("folhas de uma arvore.");
	l();
	
	srand(time(NULL));
	Arv A = balanceada(4);
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	printf("Essa arvore tem %i folhas", folhas(A));
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

int folhas(Arv A){
	
	if (A == NULL){
		return 0;
	}


	if (A->esquerda == NULL && A->direita == NULL){
		return 1;
	}
	
	return folhas(A->esquerda) + folhas(A->direita);

}

/*Arv balanceada(int quantItems){
    
    if(quantItems == 0){
        return NULL;
    }
    
    return arv(balanceada(quantItems/2), rand()%100, balanceada((quantItems - 1)/2));
}*/
