#include <stdio.h>

int rbsearch(int x, int v[], int p, int u) {
    if (p > u)
        return 0;
    
    int m = (p + u) / 2;

    if (x == v[m])
        return 1;
    else if (x < v[m])
        return rbsearch(x, v, p, m - 1);
    else
        return rbsearch(x, v, m + 1, u);
}

int aula7exercicio12(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 12");
	l();
	printc("Programa que implementa o bubble search recursiva.");
	l();
	
    int v[8] = {19, 27, 31, 48, 52, 66, 75, 80};
	exibe(v,8);
	
    printf("\nverificando se ha um 27: %d\n", rbsearch(27, v, 0, 7));
    printf("\nverificando se ha um 51: %d\n", rbsearch(51, v, 0, 7));

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
