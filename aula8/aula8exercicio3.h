#include <stdio.h>
#include <stdlib.h>

int tamanhoDaLista(Lista);

int aula8exercicio3(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 3");
	l();
	printc("Implementacao de funcao para calcular o tamanho");
	printc("da Lista.");
	l();
    
    Lista I = criaNo(3,criaNo(1,criaNo(5, criaNo(76, NULL))));
    exibeLista(I);
    printf("\nTamanho = %d\n", tamanhoDaLista(I));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;

}

int tamanhoDaLista(Lista L) {
    int tamanho = 0;
    
    while( L ) {
        tamanho++;
        L = L->proximo;
    }
    
    return tamanho;
}
