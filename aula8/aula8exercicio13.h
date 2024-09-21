#include <stdio.h>
#include <stdlib.h>

int len(Lista, int);

int aula8exercicio13(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 13");
	l();
	printc("Programa que mostra o tamanho da Lista recursivamente.");
	l();
    
    Lista I = criaNo(3,criaNo(1,criaNo(5,criaNo(8,NULL))));
    printf("Lista: ");
    exibeLista(I);
    
    printf("\nTamanho da lista: %d\n", len(I, 0));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;

}

int len(Lista L, int t) {
    if (!L)
        return t;
  
    return len(L->proximo, ++t);
}




