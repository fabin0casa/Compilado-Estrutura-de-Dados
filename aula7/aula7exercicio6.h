#include <stdio.h>
#include <stdlib.h>

void preenche(int v[], int n, int s) {
   srand(s); // definida em stdlib.h
   int i=0;
   for(i=0; i<n; i++) 
        v[i] = rand()%1000;
}
int aula7exercicio6(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 6");
	l();
	printc("Programa que implementa a funcao 'preenche'");
	printc("que preenche o vetor com valores aleatorios");
	l();
	printf("preenchendo vetor...\n");
   int v[10] = {83,31,91,46,27,20,96,25,96,80};
   preenche(v, 10, 2);
   int i=0;
   for (i = 0; i < 10; i++){
       printf("%d ", v[i]);
   }
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
}
