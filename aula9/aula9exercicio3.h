#include <stdio.h>
#include <stdlib.h>

void insertRecursiva(Item, Lista*);

int aula9exercicio3()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 3");
	l();
	printc("Programa que insere um valor numa lista ordenada");
	printc("usando uma funcao recursiva.");
	l();
    
    Lista L = NULL;
    insertRecursiva(1, &L);
    insertRecursiva(5, &L);
    insertRecursiva(10, &L);
    insertRecursiva(12, &L);
    insertRecursiva(20, &L);

    int valor = 0; 
    printf("Insira um valor: ");
    valor = scann();
    
    insertRecursiva(valor, &L);
    
    exibeLista(L);
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Função que insere um elemento em uma lista ordenada
void insertRecursiva(Item value, Lista *l) {
   
    if(*l == NULL || (*l)->valor >= value){
        *l = criaNo(value, *l);
        return;
    }
    
    insertRecursiva(value, &(*l)->proximo);
}
