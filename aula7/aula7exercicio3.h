#include <stdio.h>

/*void troca(int v[], int i, int j) {
    int x = v[i];
    v[i] = v[j];
    v[j] = x;
}*/

/*void empurra(int v[], int n) {
    int maior = 0, i=0, j=0;
    
    for (i = 0; i < n; i++) {
        if (i == 0)
            maior = v[i];
        if (v[i] > maior)
            maior = v[i];
    }

    for (j = 0; j < n - 1; j++)
        if (v[j] == maior)
            trocaIJ(v, j, j + 1);
}*/


void bsr(int v[], int n) {
    if (n == 1) {
        return; // Caso base: vetor de tamanho 1, já está ordenado
    }

    // Chama a função empurra para mover o maior elemento para a última posição
    empurra(v, n);

    // Chama a função bsr recursivamente para os primeiros n-1 elementos
    bsr(v, n - 1);
}

/*void exibe(int v[], int n) {
	int i=0;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}*/

int aula7exercicio3(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 3");
	l();
	printc("Programa que ordena com bubblesort recursivo.");
	l();
	
    int v[10] = {83, 31, 91, 46, 27, 20, 96, 25, 96, 80};
    printf("Vetor original: ");
    exibe(v, 10);
    
    bsr(v, 10);
    printf("Vetor ordenado usando bsr: ");
    exibe(v, 10);

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
