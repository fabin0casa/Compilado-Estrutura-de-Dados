#include <stdio.h>
#include <stdlib.h>

int contagem(int, Arv);

int aula12exercicio19()
{
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 19");
	l();
	printc("Programa que mostra quantas vezes um ");
	printc("numero N aparece na arvore.");
	l();
    
    Arv A = criaArv(criaArv(criaArv(NULL, 5, NULL), 5, criaArv(NULL, 4, NULL)), 1, criaArv(NULL, 3, criaArv(NULL, 5, NULL)));
    
    int n = 0;
    printf("Digite o numero para saber seu numero de ocorrencias nessa arvore: ");
    n = scann();
    
    printf("\nExibicao da arvore:\n\n");
    exibeArv(A, 0);
    
    printf("\nVezes que %i aparece na arvore sao = %i\n", n, contagem(n, A));
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int contagem(int numero, Arv A) {
    if (A == NULL) {
        return 0;
    }
    
    int cont = 0;
    
    if (A->item == numero){
        cont = 1;
    }
    
    return contagem(numero, A->esquerda) + contagem(numero, A->direita) + cont;
}

