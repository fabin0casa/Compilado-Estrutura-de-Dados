#include <stdio.h>
#include <stdlib.h>

int aula8exercicio7(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 7");
	l();
	printc("Programa para anexacao de uma lista com a outra.");
	l();
    
    Lista H = criaNo(4,criaNo(2,NULL));
    Lista I = criaNo(3,criaNo(1,criaNo(5,NULL)));
    
    printf("H = "); exibeLista(H);
    printf("\nI = "); exibeLista(I);
    
    printf("\n\nPressione enter");
    getchar();
    
    anexaListas(&H,I);
    
    printf("\nH = "); exibeLista(H);
    printf("\nI = "); exibeLista(I);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}



