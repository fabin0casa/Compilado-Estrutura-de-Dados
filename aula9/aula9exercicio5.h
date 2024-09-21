#include <stdio.h>
#include <stdlib.h>

void exiba(Lista);

int aula9exercicio5()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 5");
	l();
	printc("Completando o programa anterior com um metodo recursivo");
	printc("de exibicao.");
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
    exiba(L);
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Função que insere um elemento em uma lista ordenada
/*void insertRecursiva2(Item valor, Lista *l) {
    
    if(*l == NULL || (*l)->item > valor){
        *l = no(valor, *l);
        return;
    } 
    else if ((*l) -> item < valor) {
        insertRecursiva2(valor, &(*l)->prox);
    }
}*/

void exiba(Lista L) {
   if(L == NULL) {
        printf("\n");
        return;
   }
   
    printf("%d ",L->valor);
    L = L->proximo;
   
    exiba(L);
}
