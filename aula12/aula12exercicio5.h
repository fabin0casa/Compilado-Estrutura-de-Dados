#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Arv aleatoriaArv(int);

int aula12exercicio5()
{
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 5");
	l();
	printc("Implementacao de funcao para a criacao");
	printc("de uma arvore aleatoria.");
	l();
    
    printf("Exibicao da arvore:\n\n");
    srand(time(NULL));
    
    exibeArv(aleatoriaArv(9),0);

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

Arv aleatoriaArv(int quantItems){
    
    if(quantItems <= 0){
        return NULL;
    }
    
    int n = rand() % quantItems + 1;
    
    return criaArv(aleatoriaArv(n - 1), rand()%100, aleatoriaArv(quantItems - n));
}



