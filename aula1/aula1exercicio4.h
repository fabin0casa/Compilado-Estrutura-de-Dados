#include <stdio.h>

int aula1exercicio4(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 4");
	l();
	printc("Exercicio que faz o calculo do fatorial.");
	l();
	
    int n, fatorial;
    printf("digite um numero: ");
    n = scann();
    
    fatorial = 1;
    for (int i=2; i<=n; i++)
        fatorial *= i;
        
    printf("Fatorial: %d\n", fatorial);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
