#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aula10exercicio5(void) {
	system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 5");
	l();
	printc("Testando a funcao de pertencimento.");
	l();
	
	Valor w;
	Map I = NULL;
	
	insereMap(36,"Leo",&I);
	insereMap(15,"Ivo",&I);
	insereMap(42,"Eva",&I); 
	
	exibeMap(I);
	
	if(contemMap(42,w,I)){
		printf("\n\nValor da chave 42: %s\n",w);
	} else {
		puts("\n\nChave 42 inexistente!\n");
	}
	
	if(contemMap(10,w,I)){
		printf("\nValor da chave 10: %s\n",w);
	} else {
		puts("\nChave 10 inexistente!\n");
	}
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}
