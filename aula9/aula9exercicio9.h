#include <stdio.h>
#include <stdlib.h>

int pertenceOrdenada(Item, Lista);

int aula9exercicio9()
{
	system(CLEAR);
	l();
	printc("AULA 9 - EXERCICIO 9");
	l();
	printc("Programa que verifica se um item pertence");
	printc("a lista ordenada.");
	l();

    Lista L = NULL;
    insertEx1(1, &L);
    insertEx1(5, &L);
    insertEx1(10, &L);
    insertEx1(14, &L);
    insertEx1(20, &L);
    
    printf("Lista: ");
    exibeLista(L);
    
    if(pertenceOrdenada(5,L)){
        printf("\nO valor 5 pertence a lista\n");
    }else{
        printf("\nO valor 5 nao pertence a lista\n");
    }
    
    if(pertenceOrdenada(3,L)){
        printf("\nO valor 3 pertence a lista\n");
    }else{
        printf("\nO valor 3 nao pertence a lista\n");
    }
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}


int pertenceOrdenada(Item x, Lista L) {
   while( L != NULL && L->valor < x ) 
      L = L->proximo;
   return (L != NULL && L->valor == x);
}
