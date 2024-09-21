#include <stdio.h>
#include <stdlib.h>

typedef struct No *Ptr;
struct No {
    int item;
    Ptr prox;
};

Ptr No(int x, Ptr p) {
    
    Ptr n = malloc(sizeof(struct No));
    n->item = x;
    n->prox = p;
    
    return n;
}

int aula1exercicio15(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 15");
	l();
	printc("Programa que faz uma aplicacao de nos, ");
	printc("normalmente usado para listas encadeadas.");
	l();
    
    printf("criando nos com os valores 3, 1, 5 ...\n");
    Ptr p = No(3,No(1,No(5,NULL)));
    
    printf("\nmostrando: \n");
    while(p != NULL) {
        printf("%d\n",p->item);
        p = p->prox;
    }
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}
