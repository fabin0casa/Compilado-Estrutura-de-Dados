#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Lista aleatoria(int, int);

int aula8exercicio5(void) {
	system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 5");
	l();
	printc("Programa que gera uma lista com valores aleatorios");
	l();
	
    
   srand(time(NULL));
   
   Lista A = aleatoria(10,100);
   exibeLista(A);
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Lista aleatoria(int n, int m) {
   Lista L = NULL;
   while(n > 0) {
      L = criaNo(rand()%m, L);
      n--;
   }
   return L;
}
