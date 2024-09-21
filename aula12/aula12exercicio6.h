#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nos(Arv, int);

int aula12exercicio6()
{
    system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 6");
	l();
	printc("Programa que calcula quantos nos");
	printc("tem uma arvore.");
	l();
    
    printf("Exibicao da arvore:\n\n");
    srand(time(NULL));
    
    Arv A = aleatoriaArv(8);
    
    exibeArv(A, 0);
    
    printf("\nEssa arvore tem %i nos.", nos(A, 0));

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int nos(Arv A,int n) {
   
   if(A == NULL){
       return 1;
   }
   
   if (n == 0){
       return (nos(A->direita,n+1) + nos(A->esquerda,n+1)) - 1;
   } else {
       return (nos(A->direita,n+1) + nos(A->esquerda,n+1));
   }
   
}

/*Arv aleatoria(int quantItems){
    
    if(quantItems <= 0){
        return NULL;
    }
    
    int n = rand() % quantItems + 1;
    
    return arv(aleatoria(n - 1), rand()%100, aleatoria(quantItems - n));
}*/



