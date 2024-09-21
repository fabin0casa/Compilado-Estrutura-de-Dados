#include <stdio.h>

void trocaIJ(int v[], int i, int j) {
   int x = v[i];
   v[i] = v[j];
   v[j] = x;
}

void bsort(int v[], int n) {
    
   int i=0, j=0; 
   
   for(i=1; i <= n; i++)
   
      for(j=0; j < n-i; j++)
      
         if(v[j] > v[j+1])
         
            trocaIJ(v, j , j+1);
}

void exibe(int v[], int n) {
	int i=0;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int aula7exercicio1(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 1");
	l();
	printc("Programa que ordena um vetor usando bubble sort.");
	l();
	printf("Ordenando um vetor com os valores: 83,31,91,46,27,20,96,25,96,80...\n\n");
	int v[10] = {83,31,91,46,27,20,96,25,96,80};
	bsort(v,10);
	exibe(v,10);
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
}
