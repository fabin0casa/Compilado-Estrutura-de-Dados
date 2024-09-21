#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Item minimo(Lista);

int aula8exercicio20(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 20");
	l();
	printc("Programa que identifica o menor item da lista,");
	printc("usando uma funcao recursiva.");
	l();
   
   srand(time(NULL));
   
   Lista A = listaAleatoriaRecursiva(5, 10);
   
   exibeLista(A);
   printf("\nItem minimo = %i",  minimo(A));
    
	l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Item minimo(Lista L){
    
    if (!L){
        printf("ERRO FATAL\n");
        getchar();
        abort();
    }
        
    Item itemMinimo = L->valor;
    while(L) {
        
        if (itemMinimo > L->valor){
            itemMinimo = L->valor;
        }
        
        L = L->proximo;
    }
    
    return itemMinimo;

}

/*Lista listaAleatoriaRecursiva(int n, int m){
	
	Lista L = NULL;
	
	for (int i = 0; i < n ; i++){
		L = no(rand() % m, L);
	}

    return L;
    
}*/
