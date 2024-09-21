#include <stdio.h>
#include <stdlib.h>

void exibaInvertido(Lista);

int aula9exercicio6()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 6");
	l();
	printc("Programa para imprimir uma lista ordenada");
	printc("inversamente, com funcao recursiva.");
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
    exibaInvertido(L);
    printf("\n");
	
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}

void exibaInvertido(Lista L) {
    if(L == NULL) {
        return;
    }
    
    exibaInvertido(L->proximo);

    printf("%d ",L->valor);
   
}
