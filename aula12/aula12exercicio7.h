#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(Arv, double);

int aula12exercicio7()
{
    system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 7");
	l();
	printc("Programa que calcula a somatoria");
	printc("de uma arvore.");
	l();
    
    printf("Exibicao da arvore:\n\n");
    srand(time(NULL));
    
    Arv A = aleatoriaArv(8);
    
    exibeArv(A, 0);
    
    printf("\nSomatoria dos itens dessa arvore eh: %i", soma(A, 0));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int soma(Arv A, double somatoria) {
    if (A == NULL) {
        return 0;
    }
    
    somatoria = A->item;
    somatoria += soma(A->esquerda, somatoria + A->item);
    somatoria += soma(A->direita, somatoria + A->item);
    
    return somatoria;
}


/*Arv aleatoria(int quantItems){
    
    if(quantItems <= 0){
        return NULL;
    }
    
    int n = rand() % quantItems + 1;
    
    return arv(aleatoria(n - 1), rand()%100, aleatoria(quantItems - n));
}*/

