#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aula10exercicio1(void) {
	system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 1");
	l();
	printc("Programa para testar mapeamentos.");
	l();
	
    Map I = NULL;
    
    insereMap(36,"Leo",&I);
    insereMap(15,"Ivo",&I);
    insereMap(42,"Eva",&I);
    insereMap(29,"Ana",&I);
    
    exibeMap(I);
    
    printf("\n\nInserindo Bia...\n\n");
    insereMap(20,"Bia",&I);
    
    exibeMap(I);
        
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}
