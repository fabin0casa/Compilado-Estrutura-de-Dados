#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Item maximo(Lista);

int aula8exercicio9(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 9");
	l();
	printc("Programa que retorna o maior item de uma lista.");
	l();
   
   Lista A = criaNo(399,criaNo(10,criaNo(5,NULL)));
   
   exibeLista(A);
   printf("\nItem maximo = %i",  maximo(A));
    
	l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Item maximo(Lista L){
    
    if (!L){
        printf("ERRO FATAL\n");
        getchar();
        abort();
    }
        
    Item itemMaximo = L->valor;
    while(L) {
        
        if (itemMaximo < L->valor){
            itemMaximo = L->valor;
        }
        
        L = L->proximo;
    }
    
    return itemMaximo;

}




