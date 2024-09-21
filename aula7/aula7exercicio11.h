#include <stdio.h>

int rlsearch(int x, int v[], int n, int i) {
    if (i == n)
        return 0;
        
    if (x == v[i])
        return 1;
  
    rlsearch(x, v, n, i + 1);
}

int aula7exercicio11(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 11");
	l();
	printc("Programa que implementa a busca linear recursiva.");
	l();

    int v[8] = {66,80,31,48,27,75,19,52};
    exibe(v,8);
    printf("\nverificando se ha um 27: %d\n", rlsearch(27, v, 8, 0));
    printf("\nverificando se ha um 51: %d\n", rlsearch(51, v, 8, 0));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
