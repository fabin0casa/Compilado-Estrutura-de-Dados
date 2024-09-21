#include <stdio.h>

float potencia(float base, int expoente) {
    if(expoente == 0) 
        return 1;

    return base * potencia(base, expoente - 1);
}

int aula6exercicio2(void) {
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 2");
	l();
	printc("Exercicio para calcular a potencia de um numero.");
	l();
	
    int expoente;
    float base;
    printf("Digite a base da potencia: ");
    base = scann();
    printf("Digite o expoente da potencia: ");
    expoente = scann();
    printf("\nA potencia eh = %.1f\n", potencia(base, expoente));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
