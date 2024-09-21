#include <stdio.h>
#include <stdlib.h>

int somaRecursiva(Lista);

int aula8exercicio14(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 14");
	l();
	printc("Programa que mostra a somatoria da Lista recursivamente.");
	l();
	
   printf("Exercicio 14. Soma\n\n");
   
   Lista A = criaNo(3,criaNo(1,criaNo(5, criaNo(9, NULL))));
   
   exibeLista(A);
   
   printf("\nSoma dos itens da lista = %i", somaRecursiva(A));
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

int somaRecursiva(Lista L){
	
	if (!L){
		return 0;
	}
	
	return L->valor + somaRecursiva(L->proximo);
	
}
