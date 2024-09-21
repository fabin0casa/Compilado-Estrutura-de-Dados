#include <stdio.h>
#include <stdlib.h>

Item ultimo(Lista);

int aula8exercicio8(void) {
   system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 8");
	l();
	printc("Programa que retorna o ultimo item de uma lista.");
	l();
	
   printf("Exercicio 8. Ultimo item\n\n");
   
   Lista A = criaNo(31,criaNo(10,criaNo(54,NULL)));
   
   exibeLista(A);
   printf("\nUltimo item = %i", ultimo(A));
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Item ultimo(Lista L){
    
    if (!L){
        printf("ERRO FATAL\n");
        getchar();
        abort();
    }
        
    Item ultimoItem = 0;
    while(L) {
        ultimoItem = L->valor;
        L = L->proximo;
    }
    
    return ultimoItem;

}
