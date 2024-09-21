#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aula10exercicio3(void) {
    system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 3");
	l();
	printc("Programa testar a funcao de remocao.");
	l();
	
    Map I = NULL;
    
    insereMap(36,"Leo",&I);
    insereMap(15,"Ivo",&I);
    insereMap(42,"Eva",&I);
    insereMap(29,"Ana",&I);
    
    exibeMap(I);
    
    printf("\n\nRemovendo Ana...\n");
    removeMap(29,&I);
    
    exibeMap(I);
    printf("\n\n");
    
    printf("Removendo Eva...\n");
    removeMap(42,&I);
    
    exibeMap(I);
    printf("\n\n");
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
