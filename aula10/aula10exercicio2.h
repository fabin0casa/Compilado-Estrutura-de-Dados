#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inserirMapRec(Chave,Valor,Map*);

int aula10exercicio2(void) {
    system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 2");
	l();
	printc("Programa para inserir mapeamentos, com");
	printc("funcao recursiva.");
	l();
	
    Map I = NULL;
    
    inserirMapRec(36,"Leo",&I);
    inserirMapRec(15,"Ivo",&I);
    inserirMapRec(42,"Eva",&I);
    inserirMapRec(29,"Ana",&I);
    
    exibeMap(I);
    
    printf("\n\nInserindo Bia...\n\n");
    inserirMapRec(20,"Bia",&I);
    
    exibeMap(I);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

void inserirMapRec(Chave c,Valor v, Map *M) {
    
    if (!(*M) || c <= (*M)->chave){
        
        if (*M && c == (*M)->chave){
            strcpy((*M)->valor, v);
        }
        else {
            *M = criaNoMap(c, v, *M);
        }
        
        return;
    }
    
    inserirMapRec(c, v, &(*M)->proximo);
    
}
