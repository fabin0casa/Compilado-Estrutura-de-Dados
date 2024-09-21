#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Lista inversa(Lista, int);

int aula8exercicio11(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 11");
	l();
	printc("Programa que mostra uma Lista no sentido inverso.");
	l();
   
   Lista A = criaNo(3,criaNo(1,criaNo(5,criaNo(8,NULL))));
   Lista L = inversa(A,4);
   
   printf("Lista:\n");
   exibeLista(A);
   printf("\n\nLista invertida:\n");
   exibeLista(L);

   	l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Lista inversa(Lista A, int tamanho){
    
    Lista L = NULL;
    
    for (int i = tamanho; i > 0; i--) {
        L = criaNo(A->valor, L);
        A = A->proximo;
    }
    
    return L;

}
