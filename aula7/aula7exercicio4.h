#include <stdio.h>
#include <stdlib.h>

void intercala(int v[], int p, int m, int u) {
   int *w = malloc((u-p+1)*sizeof(int));
   int i=p, j=m+1, k=0;
   while( i<=m && j<=u )
      w[k++] = (v[i]<v[j]) ? v[i++] : v[j++];
   while( i<=m ) w[k++] = v[i++];
   while( j<=u ) w[k++] = v[j++];
   for(k=0; k<=u-p; k++) v[p+k] = w[k];
   free(w);
}

/*void exibe(int v[], int n) {
	int i=0;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}*/

int aula7exercicio4(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 4");
	l();
	printc("Implemetacao da funcao 'intercala'");
	printc("une duas partes ordenadas de um vetor em uma ");
	printc("unica sequencia ordenada.");
	l();
	
    int v[8] = {31, 48, 60, 80, 19, 27, 52, 75};
    printf("Vetor v original: ");
    exibe(v, 8);
    intercala(v, 0, 3, 7);
    printf("\nintercalando vetor v: ");
    exibe(v, 8);
    
    int w[9] = {10, 82, 27, 38, 41, 53, 60, 75, 99};
    printf("\nVetor w: ");
    exibe(w, 9);
    intercala(w, 0, 1, 8);
    printf("\nintercalando vetor w: ");
    exibe(w, 9);

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
