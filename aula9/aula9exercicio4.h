#include <stdio.h>
#include <stdlib.h>

void insertRecursiva2(Item, Lista*);

int aula9exercicio4()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 4");
	l();
	printc("Programa que insere um valor numa lista ordenada");
	printc("e checa se o valor ja esta na lista,");
	printc("usando uma funcao recursiva.");
	l();
    
    Lista L = NULL;
    insertRecursiva2(1, &L);
    insertRecursiva2(5, &L);
    insertRecursiva2(10, &L);
    insertRecursiva2(12, &L);
    insertRecursiva2(20, &L);

    int valor = 0; 
    printf("Insira um valor: ");
    valor = scann();
    
    insertRecursiva2(valor, &L);
    
    printf("Lista: ");
    exibeLista(L);
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Função que insere um elemento em uma lista ordenada
void insertRecursiva2(Item value, Lista *l) {
    
    if(*l == NULL || (*l)->valor > value){
        *l = criaNo(value, *l);
        return;
    } 
    else if ((*l) -> valor < value) {
        insertRecursiva2(value, &(*l)->proximo);
    }
}
