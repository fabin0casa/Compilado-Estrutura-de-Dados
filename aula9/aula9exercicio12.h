#include <stdio.h>
#include <stdlib.h>

int oec(Lista);

int aula9exercicio12()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 12");
	l();
	printc("Programa que verifica se uma funcao ordenada");
	printc("esta ordenada de forma estritamente crescente.");
	l();

    Lista L = NULL;
    insertEx1(1, &L);
    insertEx1(5, &L);
    insertEx1(10, &L);
    insertEx1(14, &L);
    insertEx1(20, &L);
    
    printf("Lista: ");
    exibeLista(L);
    
    if (oec(L)) {
        printf("A lista esta ordenada de forma estritamente crescente.\n");
    } else {
        printf("A lista nao está ordenada de forma estritamente crescente.\n");
    }
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int oec(Lista L) {
    if (L == NULL || L->proximo == NULL) {
        return 1;
    }
    
    if (L->valor >= L->proximo->valor) {
        return 0;
    }
    
    return oec(L->proximo);
}
