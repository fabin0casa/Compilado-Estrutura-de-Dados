#include <stdio.h>
#include <stdlib.h>

int oed(Lista);

int aula9exercicio14()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 14");
	l();
	printc("Programa que verifica se uma funcao ordenada");
	printc("esta ordenada de forma estritamente decrescente.");
	l();
	
    Lista L = criaNo(30,criaNo(25,criaNo(15, criaNo(9, criaNo(2, NULL)))));
    
    printf("Lista: ");
    exibeLista(L);
    
    if (oed(L)) {
        printf("\nA lista esta ordenada de forma estritamente decrescente.\n");
    } else {
        printf("\nA lista nao esta ordenada de forma estritamente decrescente.\n");
    }
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}


int oed(Lista L) {
    if (L == NULL || L->proximo == NULL) {
        return 1;
    }
    
    if (L->valor <= L->proximo->valor) {
        return 0;
    }
    
    return oed(L->proximo);
}
