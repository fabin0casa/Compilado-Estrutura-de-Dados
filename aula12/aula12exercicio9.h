#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int altura(Arv);

int aula12exercicio9()
{
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 9");
	l();
	printc("Programa que calcula a altura de");
	printc("uma arvore.");
	l();
    
    printf("Exibicao da arvore:\n\n");
    srand(time(NULL));
    
    Arv A = aleatoriaArv(8);
    
    exibeArv(A, 0);
    
    printf("\nA altura da arvore eh: %i", altura(A));
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int altura(Arv A) {
    if (A == NULL) {
        return 0;
    }
    
    int alturaEsq = altura(A->esquerda);
    int alturaDir = altura(A->direita);
    
    if (alturaEsq > alturaDir) {
        return alturaEsq + 1;
    } else {
        return alturaDir + 1;
    }
}

/*Arv aleatoria(int quantItems){
    
    if(quantItems <= 0){
        return NULL;
    }
    
    int n = rand() % quantItems + 1;
    
    return arv(aleatoria(n - 1), rand()%100, aleatoria(quantItems - n));
}*/
