#include <stdio.h>
#include <stdlib.h>

int osc(Lista);

int aula9exercicio11()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 11");
	l();
	printc("Programa que verifica se uma funcao ordenada");
	printc("esta ordenada de forma simplesmente crescente.");
	l();

    Lista L = NULL;
    insertEx1(1, &L);
    insertEx1(5, &L);
    insertEx1(10, &L);
    insertEx1(14, &L);
    insertEx1(20, &L);
    
    printf("Lista: ");
    exibeLista(L);
    
    if (osc(L)) {
        printf("\nA lista esta ordenada de forma simplesmente crescente.\n");
    } else {
        printf("\nA lista nao esta ordenada de forma simplesmente crescente.\n");
    }
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int osc(Lista L) {
    if (L == NULL || L->proximo == NULL) {
        return 1;
    }
    if (L->valor > L->proximo->valor) {
        return 0;
    }
    return osc(L->proximo);
}
