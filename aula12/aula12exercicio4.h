#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Arv balanceada(int);

int aula12exercicio4()
{
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 4");
	l();
	printc("Implementacao de funcao para a criacao");
	printc("de uma arvore balanceada.");
	l();
    
    printf("Exibicao da arvore:\n\n");
    srand(time(NULL));
    exibeArv(balanceada(9),0);

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

Arv balanceada(int quantItems){
    
    if(quantItems == 0){
        return NULL;
    }
    int aux = balanceada((quantItems - 1)/2);
    aux = aux + 0.5;
    return criaArv(balanceada(quantItems/2), rand()%100, aux);
}
