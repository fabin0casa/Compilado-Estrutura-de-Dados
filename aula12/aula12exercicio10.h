#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Arv clone(Arv);

int aula12exercicio10(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 10");
	l();
	printc("Programa que copia uma arvore.");
	l();
	srand(time(NULL));
	Arv A = balanceada(9);
	
	printf("Exibicao da arvore:\n");
	exibeArv(A,0);
	
	printf("\nExibicao da copia da arvore:\n");
	exibeArv(clone(A),0);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

Arv clone(Arv A){
	
	if (A == NULL){
		return NULL;
	}
	
	return criaArv(clone(A->esquerda), A->item, clone(A->direita));
}

/*Arv balanceada(int quantItems){
    
    if(quantItems == 0){
        return NULL;
    }
    
    return arv(balanceada(quantItems/2), rand()%100, balanceada((quantItems - 1)/2));
}*/
