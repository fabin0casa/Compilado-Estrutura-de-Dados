#include <stdio.h>
#include <stdlib.h>

void insertEx2(Item, Lista*);

int aula9exercicio2()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 2");
	l();
	printc("Programa que insere um valor numa lista ordenada");
	printc("e checa se o valor ja esta na lista.");
	l();
    
    Lista L = NULL;
    insertEx2(1, &L);
    insertEx2(5, &L);
    insertEx2(10, &L);
    insertEx2(12, &L);
    insertEx2(20, &L);

    int valor = 0; 
    printf("Insira um valor: ");
    valor = scann();
    
    insertEx2(valor, &L);
    
    printf("Lista: ");
    exibeLista(L);
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Função que insere um elemento em uma lista ordenada
void insertEx2(Item value, Lista *l) {
   
    while(*l != NULL && (*l)->valor <= value){
        
        if((*l)->valor == value){
            printf("O valor %d ja esta na lista\n", value);
            return;
        }
        
        l = &(*l)->proximo;
    }
    *l = criaNo(value, *l);
}
