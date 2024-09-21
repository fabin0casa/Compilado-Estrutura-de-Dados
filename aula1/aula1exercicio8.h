#include <stdio.h>

void barras(int v[], int n) {
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<v[i]; j++)
            putchar(220);
            putchar('\n');
    }
}

int aula1exercicio8(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 8");
	l();
	printc("Programa que cria barras na tela ");
	printc("de acordo com parametros pre-estabelecidos.");
	l();
	
    int a[4] = {3,4,2,1};
    int b[3] = {9,4,7};
    
    printf("Barras A, com os parametros 3, 4, 2, 1\n");
    barras(a,4);
    getchar();
    
    printf("\nBarras B, com os parametros 9, 4, 7\n");
    barras(b,3);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
