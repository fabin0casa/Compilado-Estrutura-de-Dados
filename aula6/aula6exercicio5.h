#include <stdio.h>

void contagemProgressiva(int n) {
    if(n == 0) 
        return;
        
    contagemProgressiva(n-1);
    printf("%d ",n);
    if (n % 10 == 0) printf("\n");
}

int aula6exercicio5(void) {
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 5");
	l();
	printc("Exercicio para fazer a contagem progressiva de um numero.");
	l();
	
    int n;
    printf("Digite um numero para fazer sua contagem progressiva: ");
    n = scann();
    printf("contagem progressiva:\n\n");
    contagemProgressiva(n);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
