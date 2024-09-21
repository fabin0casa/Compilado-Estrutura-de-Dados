#include <stdio.h>

int fatorial(int numero) {
    int fatorial = 1;
    for(int i = 2;  i<= numero; i++)
        fatorial *= i;
        
    return fatorial;
}

int aula1exercicio7(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 7");
	l();
	printc("Programa que faz o calculo do fatorial, ");
	printc("sando uma funcao dedicada pra isso.");
	l();
    
    int numero = 0;
    
    printf("Entre com o numero: ");
    numero = scann();

    printf("\nFatorial do %i: %d\n", numero, fatorial(numero));
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}
