#include <stdio.h>
#include <stdlib.h>

void sorted(Lista);

int aula8exercicio21(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 21");
	l();
	printc("Programa que retorna se a lista esta ordenada.");
	l();
   
   Lista A = criaNo(1,criaNo(2,criaNo(3,criaNo(8,NULL))));
   printf("lista A: ");
   exibeLista(A);
   sorted(A);
   
   	l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

void sorted(Lista L) {
    if (L == NULL || L->proximo == NULL) {
        printf("\nA lista esta ordenada.\n");
        return;
    }
    
    if (L->valor > L->proximo->valor) {
        printf("\nA lista nao esta ordenada.\n");
        return;
    }

    return sorted(L->proximo);
}
