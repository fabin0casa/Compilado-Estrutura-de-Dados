#include <stdio.h>
#include <stdlib.h>

//Funções
void insertEx1(Item, Lista*);

int aula9exercicio1()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 1");
	l();
	printc("Programa que insere um valor numa lista ordenada");
	l();

    Lista L = NULL;
    insertEx1(1, &L);
    insertEx1(5, &L);
    insertEx1(10, &L);
    insertEx1(12, &L);
    insertEx1(20, &L);
    
    int valor = 0; 
    printf("Insira um valor: ");
    valor = scann();
    
    insertEx1(valor, &L);
    
    exibeLista(L);
    printf("\n");
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Função que insere um elemento em uma lista ordenada
void insertEx1(Item value, Lista *l) {
   
   while(*l != NULL && (*l)->valor < value) 
      l = &(*l)->proximo;
      
   *l = criaNo(value, *l);
}
