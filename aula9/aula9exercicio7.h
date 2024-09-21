#include <stdio.h>
#include <stdlib.h>

void remova(Item, Lista*);

int aula9exercicio7()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 7");
	l();
	printc("Programa que remove um item de uma");
	printc("lista ordenada.");
	l();

    Lista L = NULL;
    insertEx1(1, &L);
    insertEx1(5, &L);
    insertEx1(10, &L);
    insertEx1(12, &L);
    insertEx1(20, &L);
    
    printf("Lista: ");
    exibeLista(L);
    
    int valor = 0;
    printf("\ninsira qual valor quer tirar: ");
    valor = scann();
    remova(valor, &L);
    
    printf("Lista: ");
    exibeLista(L);
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

void remova(Item x, Lista *L) {
    while( *L != NULL && (*L)->valor < x ) 
        L = &(*L)->proximo;
        
    if( *L == NULL || (*L)->valor > x ) 
        return;
        
    Lista n = *L;
    *L = n->proximo;
    free(n);
}

