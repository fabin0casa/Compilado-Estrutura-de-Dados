#include <stdio.h>
#include <stdlib.h>

int osd(Lista);

int aula9exercicio13()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 13");
	l();
	printc("Programa que verifica se uma funcao ordenada");
	printc("esta ordenada de forma simplesmente decrescente.");
	l();
    
    Lista L = criaNo(30,criaNo(25,criaNo(15, criaNo(9, criaNo(2, NULL)))));
    
    printf("Lista: ");
    exibeLista(L);
    
    if (osd(L)) {
        printf("\nA lista esta ordenada de forma simplesmente decrescente.\n");
    } else {
        printf("\nA lista nao esta ordenada de forma simplesmente decrescente.\n");
    }
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int osd(Lista L) {
    if (L == NULL || L->proximo == NULL) {
        return 1;
    }
    
    if (L->valor < L->proximo->valor) {
        return 0;
    }
    
    return osd(L->proximo);
}
