#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void destroiMapRec(Map*);

int aula10exercicio8(void) {
	system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 8");
	l();
	printc("Refatorando a funcao para 'detruir' o mapeamento,");
	printc("com funcao recursiva.");
	l();
	
	Valor w;
	Map I = NULL;
	
	insereMap(36,"Leo",&I);
	insereMap(15,"Ivo",&I);
	insereMap(42,"Eva",&I); 
	
	exibeMap(I);
	
	puts("\n\nDestruindo mapeamento...\n");
	destroiMapRec(&I);
	
	exibeMap(I);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

void destroiMapRec(Map *M) {
   
	if (*M == NULL){
		return;
	}
   
	Map n = *M;
	*M = n->proximo;
	free(n);
	
	destroiMapRec(M);
   
}



