#include <stdio.h>

void trocar(int *a, int *b) {
    int variavelTemp = *a;
    *a = *b;
    *b = variavelTemp;
}

int aula1exercicio13(){
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 13");
	l();
	printc("Correcao do exercicio anterior");
	l();
	
    int a = 90;
    int b = 7;
    printf("declaracoes iniciais:\na=90\nb=7\n\n");
    
    trocar(&a, &b);
    
    printf("variaveis trocadas:\n");
    printf("a = %i\nb = %i", a, b);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

