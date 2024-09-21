#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Lista clonar(Lista, int, int, Lista);

int aula8exercicio15(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 15");
	l();
	printc("Programa para clonar listas com funcao recursiva.");
	l();
   
   Lista A = criaNo(3,criaNo(1,criaNo(5,criaNo(8,NULL))));


   Lista L = clonar(A,4,0,NULL);
   
   printf("Lista:\n");
   exibeLista(A);
   printf("\n\n");
   printf("Lista clonada:\n");
   exibeLista(L);

    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Lista clonar(Lista A, int tamanho, int contador, Lista L){
    if (contador == tamanho)
        return L;

    if (L == NULL) {
        L = criaNo(A->valor, NULL);
    } 
    else {
        Lista temp = L;
        
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        
        temp->proximo = criaNo(A->valor, NULL);
    }

    return clonar(A->proximo, tamanho, ++contador, L);
}




