#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pertenceMapRec(Chave, Valor, Map);

int aula10exercicio6(void) {
	system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 6");
	l();
	printc("Refatorando a funcao de pertencimento, com");
	printc("funcao recursiva");
	l();
	
	Valor w;
	Map I = NULL;
	
	insereMap(36,"Leo",&I);
	insereMap(15,"Ivo",&I);
	insereMap(42,"Eva",&I); 
	
	exibeMap(I);
	
	if(pertenceMapRec(42,w,I)){
		printf("\n\nValor da chave 42: %s\n",w);
	} else {
		puts("\n\nChave 42 inexistente!\n");
	}
	
	if(pertenceMapRec(10,w,I)){
		printf("\nValor da chave 10: %s\n",w);
	} else {
		puts("\nChave 10 inexistente!\n");
	}
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

int pertenceMapRec(Chave c, Valor v, Map M) {
	
	if (!M || c <= M->chave){
		
		if( M && c==M->chave ){
			strcpy(v,M->valor);
		}
	
		return (M && c==M->chave);
	}
	
	return pertenceMapRec(c, v, M->proximo);
}
