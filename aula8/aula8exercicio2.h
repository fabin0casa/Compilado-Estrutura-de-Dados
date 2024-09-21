#include <stdio.h>
#include <stdlib.h>

void exibeFormatado(Lista);

int aula8exercicio2(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 2");
	l();
	printc("Outra forma de exibicao da Lista.");
	l();
	
    Lista I = criaNo(3,criaNo(1,criaNo(5,NULL)));
    exibeFormatado(I);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

void exibeFormatado(Lista L){
    
    int contador = 0;
    
    printf("[");
    while( L != NULL ) {
        
        if(contador == 0){
            printf("%d",L->valor);
        } else {
            printf(", %d",L->valor);
        }
        
        contador++;
        L = L->proximo;
    }
    printf("]");
    
}
