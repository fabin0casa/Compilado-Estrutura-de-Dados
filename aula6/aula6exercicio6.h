#include <stdio.h>

void contagemRegressiva(int n) {
    if(n == 0) 
        return;
        
    printf("%d ",n);
    if (n % 10 == 0) printf("\n");
    contagemRegressiva(n-1);
}

int aula6exercicio6(void) {
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 6");
	l();
	printc("Exercicio para fazer a contagem regressiva de um numero.");
	l();
	
    int n;
    printf("Digite um numero para mostrar sua contagem regressiva ");
    n = scann();
    printf("Contagem regressiva:\n\n");
    contagemRegressiva(n);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
