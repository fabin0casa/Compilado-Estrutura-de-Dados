#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pertinenciaRecursiva(int, Lista);

int aula8exercicio18(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 18");
	l();
	printc("Programa que identifica se um item esta na lista,");
	printc("a partir de uma lista aleatoria gerada.");
	l();
   
   srand(time(NULL));
   
   Lista A = listaAleatoriaRecursiva(5, 5);
   
   exibeLista(A);
   
   int valor = 3;
   
   if (pertinenciaRecursiva(valor, A)){
		printf("\nO valor %i esta dentro da lista!", valor);
   }
   else {
   		printf("\nO valor %i nao esta dentro da lista!", valor);
   }
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

int pertinenciaRecursiva(int valor, Lista L){
	
	if (!L){
		return 0;
	}
	
    if (valor == L->valor){
    	return 1;
    }
    
    return pertinenciaRecursiva(valor, L->proximo);
}

/*Lista listaAleatoriaRecursiva(int n, int m){
	
	Lista L = NULL;
	
	for (int i = 0; i < n ; i++){
		L = no(rand() % m, L);
	}

    return L;
    
}*/
