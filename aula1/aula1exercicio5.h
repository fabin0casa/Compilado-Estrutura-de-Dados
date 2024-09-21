#include <stdio.h>

int aula1exercicio5(void) {
    system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 5");
	l();
	printc("Programa que soma os digitos de um numero.");
	l();
	
    int numero;
    
    printf("Insira o numero: ");
    numero = scann();
    
    int soma = 0;
    while(numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    
    printf("\nSoma dos digitos = %d\n",soma);
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
