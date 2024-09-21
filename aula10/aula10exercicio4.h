#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remocaoMapRec(Chave, Map*);

int aula10exercicio4(void) {
    system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 4");
	l();
	printc("Refatorando a funcao de remocao, com");
	printc("funcao recursiva");
	l();
	
    Map I = NULL;
    
    insereMap(36,"Leo",&I);
    insereMap(15,"Ivo",&I);
    insereMap(42,"Eva",&I);
    insereMap(29,"Ana",&I);
    
    exibeMap(I);
    
    printf("\n\nRemovendo Ana...\n");
    remocaoMapRec(29,&I);
    
    exibeMap(I);
    printf("\n\n");
    
    printf("Removendo Eva...\n");
    remocaoMapRec(42,&I);
    
    exibeMap(I);
    printf("\n\n");
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

void remocaoMapRec(Chave c, Map *M) {
    
    if(!(*M) || c <= (*M)->chave ){
        
        if( *M==NULL || c!=(*M)->chave ){
            return;
        }
            
        Map n = *M;
        *M = n->proximo;
        free(n);
    
        return;
    }
        
    remocaoMapRec(c, &(*M)->proximo);
    
}
