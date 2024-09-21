#include <stdio.h>
#include <stdlib.h>

int pertence_recursivo(Item, Lista);

int aula9exercicio10()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 10");
	l();
	printc("Programa que verifica se um item pertence");
	printc("a lista ordenada, usando funcao recursiva.");
	l();

    Lista L = NULL;
    insertEx1(1, &L);
    insertEx1(5, &L);
    insertEx1(10, &L);
    insertEx1(14, &L);
    insertEx1(20, &L);
    
    printf("Lista: ");
    exibeLista(L);
    
    if(pertence_recursivo(5,L)){
        printf("O valor 5 pertence a lista\n");
    }else{
        printf("O valor 5 nao pertence a lista\n");
    }
    
    if(pertence_recursivo(3,L)){
        printf("O valor 3 pertence a lista\n");
    }else{
        printf("O valor 3 nao pertence a lista\n");
    }
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}


int pertence_recursivo(Item x, Lista L) {
    if (L == NULL) {
        return 0;
    }
    if (L->valor == x) {
        return 1;
    }
 
    return pertence_recursivo(x, L->proximo);
}
