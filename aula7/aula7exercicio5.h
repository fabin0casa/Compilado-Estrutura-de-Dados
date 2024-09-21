#include <stdio.h>
#include <stdlib.h>

/*void intercala(int v[], int p, int m, int u) {
   int *w = malloc((u-p+1)*sizeof(int));
   int i=p, j=m+1, k=0;
   while( i<=m && j<=u )
      w[k++] = (v[i]<v[j]) ? v[i++] : v[j++];
   while( i<=m ) w[k++] = v[i++];
   while( j<=u ) w[k++] = v[j++];
   for(k=0; k<=u-p; k++) v[p+k] = w[k];
   free(w);
}*/

void ms(int v[], int p, int u) {
   if( p==u ) return;
   int m = (p+u)/2;
   ms(v,p,m);
   ms(v,m+1,u);
   intercala(v,p,m,u);
}


void msort(int v[], int n) {
   ms(v,0,n-1);
}

/*void exibe(int v[], int n) {
	int i=0;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}*/

int aula7exercicio5(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 5");
	l();
	printc("Programa que implementa o mergesort");
	l();
	
	printf("Vetor original: ");
   int v[10] = {83,31,91,46,27,20,96,25,96,80};
   exibe(v,10);
   msort(v,10);
   printf("Vetor organizado: ");
   exibe(v,10);
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
}
