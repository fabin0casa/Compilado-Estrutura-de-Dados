#include <stdio.h>

int fatorialRecursivo(int n) {
    if(n == 0) 
        return 1;

    return n * fatorialRecursivo(n-1);
}

int aula6exercicio1(void) {
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 1");
	l();
	printc("Exercicio para calcular o fatorial de um numero.");
	l();
	
    int n;
    printf("Digite um numero para saber o fatorial dele ");
    n = scann();
    printf("Fatorial eh igual a %d\n",fatorialRecursivo(n));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
