#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Lista listaAleatoriaRecursiva(int, int);

int aula8exercicio16(void) {
   system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 16");
	l();
	printc("Programa para gerar uma lista com valores aleatorios,");
	printc("usando uma funcao recursiva.");
	l();
   
   srand(time(NULL));
      
   int numeroItens = 0;
   int intervalo = 0;
   
   printf("Insira o numero de itens que voce quer ter na lista: ");
   numeroItens = scann();
   fflush(stdin);
   
   printf("Vai querer de 0 ate quanto?\n(Ex.: 0 ate 100)\n\n");
   intervalo = scann();
   fflush(stdin);
   
   Lista A = listaAleatoriaRecursiva(numeroItens, intervalo);
   printf("lista: ");
   exibeLista(A);
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Lista listaAleatoriaRecursiva(int n, int m){
	
	Lista L = NULL;
	
	for (int i = 0; i < n ; i++){
		L = criaNo(rand() % m, L);
	}

    return L;
    
}
