#include <stdio.h>

int aula1exercicio3(void) {
    system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 3");
	l();
	printc("Programa  que determina e imprime o dia da semana ");
	printc("com base no ultimo digito do numero da placa ");
	printc("fornecido pelo usuario");
	l();
    int numeroPlaca;
    
    printf("Insira o numero da placa: ");
    numeroPlaca = scann();
    printf("\n");
    
    switch(numeroPlaca % 10) {
        case 1: case 2:
        puts("Segunda-feira"); break;
        
        case 3: case 4:
        puts("Terca-feira"); break;
        
        case 5: case 6:
        puts("Quarta-feira"); break;
        
        case 7: case 8:
        puts("Quinta-feira"); break;
        
        default:
        puts("Sexta-feira");
    }
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
