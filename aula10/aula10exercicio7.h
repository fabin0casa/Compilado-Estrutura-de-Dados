#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void destroim(Map*);

int aula10exercicio7(void) {
	system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 7");
	l();
	printc("Testando a funcao para 'detruir' o mapeamento,");
	printc("usado para liberar memoria.");
	l();
	
	Valor w;
	Map I = NULL;
	
	insereMap(36,"Leo",&I);
	insereMap(15,"Ivo",&I);
	insereMap(42,"Eva",&I); 
	
	exibeMap(I);
	
	puts("\n\nDestruindo mapeamento...\n");
	destroim(&I);
	
	exibeMap(I);
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

void destroim(Map *M) {
   
   while( *M != NULL ) {
      Map n = *M;
      *M = n->proximo;
      free(n);
   }
   
}

