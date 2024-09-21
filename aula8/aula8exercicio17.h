#include <stdio.h>
#include <stdlib.h>

Item last(Lista, Item);

int aula8exercicio17(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 17");
	l();
	printc("Programa que retorna o ultimo item da lista,");
	printc("usando uma funcao recursiva.");
	l();
   
   Lista A = criaNo(3,criaNo(1,criaNo(5,criaNo(8,NULL))));
   
   exibeLista(A);
   printf("\nUltimo item = %i", last(A,0));
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Item last(Lista L, Item ultimo){
    if (!L)
        return ultimo;
        
    return last(L->proximo, L->valor);
}

