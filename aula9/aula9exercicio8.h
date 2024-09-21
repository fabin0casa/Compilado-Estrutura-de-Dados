#include <stdio.h>
#include <stdlib.h>

void rem_todo(Item, Lista*);

int aula9exercicio8()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 8");
	l();
	printc("Programa que remove todo item X de uma");
	printc("lista ordenada.");
	l();

    Lista L = NULL;
    insertEx1(1, &L);
    insertEx1(5, &L);
    insertEx1(10, &L);
    insertEx1(10, &L);
    insertEx1(20, &L);
    
    printf("Lista: ");
    exibeLista(L);
    
    int valor = 0;
    printf("\ninsira o valor X que quer tirar: ");
    valor = scann();
    rem_todo(valor, &L);
    
    printf("Lista: ");
    exibeLista(L);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}


void rem_todo(Item x, Lista *L) {
    while (*L != NULL) {
        
        if ((*L)->valor == x) {
            Lista n = *L;
            *L = n->proximo;
            free(n);
        } 
        else {
            L = &(*L)->proximo;
        }
    }
}

